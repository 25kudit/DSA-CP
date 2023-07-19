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
        vector<int> x(n),h(n);
        for(int i=0;i<n;i++)cin>>x[i]>>h[i];
        vector<vector<int>> dp(2,vector<int> (n,0));
        //dp[0][i]=max trees cut down till i if ith tree is falling on left
        //dp[1][i]=max trees cut down till i if ith tree is falling on right

        dp[0][0]=1;
        dp[1][0]=0;

        for(int i=1;i<n;i++){
            //previous tree cannot fall on right
            if(x[i-1]+h[i-1]>=x[i])dp[1][i-1]-=1;
            
            //current tree falling on right side
            if(i==n-1 || x[i]+h[i]<x[i+1])dp[1][i]=max(dp[1][i-1],dp[0][i-1])+1;

            //current tree falling on left side and previous on right side
            if(x[i-1]+h[i-1]<x[i]-h[i])dp[0][i]=dp[1][i-1]+1;

            //current tree falling on left and previous also on left
            if(x[i]-h[i]>x[i-1])dp[0][i]=max(dp[0][i],dp[0][i-1]+1);

            //current tree cannot be dropped on left
            if(x[i]-h[i]<=x[i-1])dp[0][i]=max(dp[0][i-1],dp[1][i-1]);
        }
        cout<<max(dp[0][n-1],dp[1][n-1])<<"\n";
    }
    return 0;
}