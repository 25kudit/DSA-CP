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
#define mod (int)(1e9+7)


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int k,n;
        cin>>k>>n;
        vector<vector<int>> dp(k+1,vector<int> (n+1,0));
        for(int i=1;i<=k;i++)dp[i][1]=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                for(int m=j;m<=k;m+=j){
                    dp[m][i+1]=(dp[m][i+1]+dp[j][i])%mod;
                }
            }
        }
        
        int ans=0;
        for(int i=1;i<=k;i++)ans=(ans+dp[i][n])%mod;
        cout<<ans<<"\n";
    }
    return 0;
}