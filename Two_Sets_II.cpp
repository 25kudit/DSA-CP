#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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
#define mod 1000000007


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
        if((n*(n+1))%4 !=0){
            cout<<0<<"\n";
            continue;
        }
        int t = n*(n+1)/4;
        vector<vector<int>> dp(n+1,vector<int> (t+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=t;j++){
                if(j-i>=0)dp[i][j]=(dp[i][j]+dp[i-1][j]+dp[i-1][j-i])%mod;
                else dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
            }
        }
        cout<<dp[n][t]<<"\n";
    }
    return 0;
}