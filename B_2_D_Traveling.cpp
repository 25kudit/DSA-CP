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
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            vp.push_back({x,y});
        }
        int mx,d1,d2;
        mx=d1=d2=abs(vp[a-1].first-vp[b-1].first)+abs(vp[a-1].second-vp[b-1].second);
        for(int i=0;i<k;i++){
            d1=min(d1,abs(vp[a-1].first-vp[i].first)+abs(vp[a-1].second-vp[i].second));
            d2=min(d2,abs(vp[b-1].first-vp[i].first)+abs(vp[b-1].second-vp[i].second));
        }
        cout<<min(d1+d2,mx)<<"\n";

    }
    return 0;
}