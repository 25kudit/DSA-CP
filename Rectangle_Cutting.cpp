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
        int a,b;
        cin>>a>>b;
        vector<vector<int>> dp(a+1,vector<int> (b+1,INT_MAX));
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if(i==j){
                    dp[i][j]=0;
                    continue;
                }
                int temp1=INT_MAX,temp2=INT_MAX;
                for(int t=1;t<=i;t++)temp1=min(temp1,1+dp[t][j]+dp[i-t][j]);
                for(int t=1;t<=j;t++)temp2=min(temp2,1+dp[i][t]+dp[i][j-t]);
                dp[i][j]=min(temp1,temp2);
            }
        }
        // for(auto it:dp){for(auto i : it)cout<<i<<" ";cout<<"\n";}
        cout<<dp[a][b]<<"\n";
    }
    return 0;
}