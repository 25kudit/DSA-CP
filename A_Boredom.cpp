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
        vector<int> freq(100010,0);
        int mx=0,ans=0;
        for(int i=1;i<=n;i++){
            int t;
            cin>>t;
            freq[t]++;
            mx=max(mx,t);
        }
        vector<int> dp(mx+1,0);
        dp[1]=freq[1];
        for(int i=2;i<=mx;i++){
            dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
        }
        // for(auto it :dp)cout<<it<<" ";
        cout<<dp[mx]<<"\n";

    }
    return 0;
}