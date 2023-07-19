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

struct DSU {
    vector<int> parent,height;
    void init(int n){
        parent.resize(n);
        height.assign(n,0ll);
        for(int i=0;i<n;i++)parent[i]=i;
    }

    int find(int x){
        if(parent[x] == x)return x;
        parent[x]=find(parent[x]);
        return parent[x];
    }

    void union_r(int x,int y){
        int xrep=find(x),yrep = find(y);
        if(xrep == yrep )return;
        if(height[xrep]>height[yrep])parent[yrep]=xrep;
        else if(height[xrep]<height[yrep])parent[xrep]=yrep;
        else {
            parent[yrep]=xrep;
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
        int x,y;
        cin>>s>>x>>y;
        x--;
        y--;
        if(s=="union")dsu.union_r(x,y);
        else{
            if(dsu.find(x)==dsu.find(y))cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}