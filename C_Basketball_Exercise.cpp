#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1,0),b(n+1,0);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        vector<vector<int>> dp(n+1,vector<int> (2,0));
        dp[1][0]=a[1];
        dp[1][1]=b[1];
        for(int i=2;i<=n;i++){
            dp[i][0]=a[i]+max(dp[i-1][1],dp[i-2][1]);
            dp[i][1]=b[i]+max(dp[i-1][0],dp[i-2][0]);
        }
        cout<<max(dp[n][0],dp[n][1])<<"\n";

    }
    return 0;
}