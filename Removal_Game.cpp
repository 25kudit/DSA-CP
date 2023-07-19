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
        vector<int> a(n+1),sum(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        for(int i=n;i>=1;i--){
            for(int j=i;j<=n;j++){
                if(i==j)dp[i][j]=a[i];
                else{
                    dp[i][j]=max(a[i]+sum[j]-sum[i]-dp[i+1][j],a[j]+sum[j-1]-sum[i-1]-dp[i][j-1]);
                }
            }
        }
        cout<<dp[1][n]<<"\n";

    }
    return 0;
}