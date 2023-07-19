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
        int n,m,d;
        cin>>n>>m>>d;
        vector<int> a(n+1),b(m),pos(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        for(int i=1;i<=n;i++)pos[a[i]]=i;
        int ans = INT_MAX;
        for(int i=0;i<m-1;i++){
            if(pos[b[i]]>pos[b[i+1]] || pos[b[i+1]]>pos[b[i]]+d)ans=0;
            else ans = min(ans, min(pos[b[i+1]]-pos[b[i]],d+1>=n?INT_MAX:pos[b[i]]+d-pos[b[i+1]]+1));
        }
        cout<<ans<<"\n";


    }
    return 0;
}