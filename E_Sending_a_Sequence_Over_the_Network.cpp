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



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1,-1);
        for(int i=1;i<=n;i++)cin>>a[i];
        vector<bool> dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            if(i+a[i]<=n && dp[i-1]==1)
                dp[i+a[i]]=1;
            if(i-a[i]-1>=0 && dp[i-a[i]-1]==1)
                dp[i]=1;
        }
        if(dp[n]==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}