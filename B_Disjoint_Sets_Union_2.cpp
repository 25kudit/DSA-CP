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

struct DSU{
    vector<int> parent,height,mini,maxi,cnt;
    void init(int n){
        parent.resize(n);
        height.assign(n,0ll);
        cnt.assign(n,1ll);
        mini.resize(n);
        maxi.resize(n);
        for(int i =0;i<n;i++){
            parent[i]=i;
            mini[i]=i;
            maxi[i]=i;
        }
    }

    int find(int x){
        if(parent[x]!=x)
            parent[x]= find(parent[x]);
        
        return parent[x];
    }

    void union_r(int x,int y){
        int xrep = find(x),yrep = find(y);
        if(xrep == yrep)return;
        
        if(height[xrep]>height[yrep]){
            parent[yrep]=xrep;
            mini[xrep]=min(mini[xrep],mini[yrep]);
            maxi[xrep]=max(maxi[xrep],maxi[yrep]);
            cnt[xrep]+=cnt[yrep];
        }
        else if ( height[yrep]>height[xrep]){
            parent[xrep]=yrep;
            mini[yrep]=min(mini[xrep],mini[yrep]);
            maxi[yrep]=max(maxi[xrep],maxi[yrep]);
            cnt[yrep]+=cnt[xrep];
        }
        else{
            parent[yrep]=xrep;
            mini[xrep]=min(mini[xrep],mini[yrep]);
            maxi[xrep]=max(maxi[xrep],maxi[yrep]);
            cnt[xrep]+=cnt[yrep];
            height[xrep]++;
        }
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    DSU dsu;
    dsu.init(n);
    while(m--){
        string s;
        cin>>s;
        if(s=="union"){
            int x,y;
            cin>>x>>y;
            x--;y--;
            dsu.union_r(x,y);
        }
        else{
            int x;
            cin>>x;
            x--;
            int t = dsu.find(x);
            cout<<dsu.mini[t]+1<<" "<<dsu.maxi[t]+1<<" "<<dsu.cnt[t]<<"\n";
        }
    }
    return 0;
}