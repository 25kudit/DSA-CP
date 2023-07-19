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
    cin >> T;
    while (T--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> x(n),y(n);
        for(int i=0;i<n;i++){
            if(s<a[i]){
                x[i]=s;
                y[i]=a[i]-s;
            }
            else{
                x[i]=0;
                y[i]=a[i];
            }
        }

        vector<vector<int>> dp(2,vector<int> (n,0));
        dp[0][1]=a[0]*x[1];
        dp[1][1]=a[0]*y[1];
        
        for(int i=2;i<n-1;i++){
            dp[0][i]=min(dp[0][i-1]+x[i]*y[i-1],dp[1][i-1]+x[i]*x[i-1]);
            dp[1][i]=min(dp[0][i-1]+y[i]*y[i-1],dp[1][i-1]+y[i]*x[i-1]);
        }
        cout<<min(dp[0][n-2]+y[n-2]*a[n-1],dp[1][n-2]+x[n-2]*a[n-1])<<"\n";

    }
    return 0;
}