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
        int n;
        cin>>n;
        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++)cin>>a[i];
        vector<int> dp (n+1,1);
        dp[0]=0;
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=i*2;j<=n;j+=i){
                if(a[j]>a[i])
                    dp[j]=max(dp[j],dp[i]+1);
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}