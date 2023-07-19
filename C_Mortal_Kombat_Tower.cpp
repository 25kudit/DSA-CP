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

// state: dp[i][who]-> skip points used till length i and who's turn is go next 
// who 1->us, 0->friend

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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=a[0],it=0;
        for(int i=1;i<n;i++){
            if(a[i]==1)it++;
            else{
                ans+=it/3;
                it=0;
            }
        }
        ans+=it/3;
        cout<<ans<<"\n";



        //DP solution:
        // vector<int> a(n+1);
        // for(int i=1;i<=n;i++) cin>>a[i];
        // vector<vector<int>> dp(n+1,vector<int>(2,INT_MAX));
        // dp[0][0]=0;
        // for(int i=0;i<=n-1;i++){
        //     if(dp[i][0]!=INT_MAX){
        //         dp[i+1][1]=min(dp[i+1][1],dp[i][0]+(a[i+1]==1));
        //         if(i+2<=n)dp[i+2][1]=min(dp[i+2][1],dp[i][0]+(a[i+1]==1)+(a[i+2]==1));
        //     }
        //     if(dp[i][1]!=INT_MAX){
        //         dp[i+1][0]=min(dp[i+1][0],dp[i][1]);
        //         if(i+2<=n)dp[i+2][0]=min(dp[i+2][0],dp[i][1]);
        //     }
        // }
        // cout<<min(dp[n][0],dp[n][1])<<"\n";


    }
    return 0;
}