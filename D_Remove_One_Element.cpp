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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<vector<int>> dp(n,vector<int> (2,0));
        int ans=1;
        dp[0][0]=dp[0][1]=1;
        //dp[i][0]= req len of subarray ending at i if (i-1) is skipped
        //dp[i][1]= req len of subarray ending at i if (i-1) is included

        for(int i=1;i<n;i++){
            dp[i][0]=dp[i][1]=1;
            if(a[i-1]<a[i]){
                dp[i][0]=dp[i-1][0]+1;
                dp[i][1]=dp[i-1][1]+1;
            }
            if(i>1 && a[i]>a[i-2]){
                dp[i][0]=max(dp[i][0],dp[i-2][1]+1);
            }
            
            ans=max({ans,dp[i][0],dp[i][1]});
        }
        cout<<ans<<"\n";
    }
    return 0;
}
