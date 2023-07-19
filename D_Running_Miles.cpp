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
        vector<int> a(n+2),pre(n+2,INT_MIN),suf(n+2,INT_MIN);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)pre[i]=max(pre[i-1],a[i]+i);
        for(int i=n;i>=1;i--)suf[i]=max(suf[i+1],a[i]-i);
        int ans=0;
        for(int i=2;i<=n-1;i++)
            ans=max(ans,a[i]+pre[i-1]+suf[i+1]);
        cout<<ans<<"\n";
    }
    return 0;
}