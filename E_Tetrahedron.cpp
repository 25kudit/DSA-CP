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
        vector<vector<int>> dp(2,vector<int> (4,0));
        dp[0][0]=dp[0][1]=dp[0][2]=1;
        dp[0][3]=0;
        for(int i=1;i<=n;i++){
            for(int j=0;j<4;j++){
                dp[i%2][j] = (dp[(i-1)%2][0]+dp[(i-1)%2][1]+dp[(i-1)%2][2]+dp[(i-1)%2][3]-dp[(i-1)%2][j])%1000000007;
            }
        }
        cout<<dp[(n-1)%2][3]<<"\n";
    }
    return 0;
}