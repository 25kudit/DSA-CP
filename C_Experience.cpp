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
    vector<int> parent,point,height;
    void init(int n){
        parent.resize(n);
        for(int i=0;i<n;i++)parent[i]=i;
        point.assign(n,0ll);
        height.assign(n,0ll);
    }

    int find(int x){
        if(parent[x]!=x)
            return find(parent[x]);
        return parent[x];
    }

    int calc(int x){
        if(x==parent[x])return point[x];
        return point[x]+calc(parent[x]);
    }

    void union_r(int x,int y){
        int xrep= find(x), yrep = find(y);
        if(xrep == yrep)return;
        if(height[xrep]>height[yrep]){
            parent[yrep]=xrep;
            point[yrep]-=point[xrep];
        }
        else if(height[xrep]<height[yrep]){
            parent[xrep]=yrep;
            point[xrep]-=point[yrep];
        }
        else{
            parent[yrep]=xrep;
            point[yrep]-=point[xrep];
            height[xrep]++;
        }
    }

    void add_r(int x,int val){
        int xrep= find(x);
        point[xrep]+=val;
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
        if(s=="add"){
            int x,val;
            cin>>x>>val;
            x--;
            dsu.add_r(x,val);
        }
        else if(s=="join"){
            int x,y;
            cin>>x>>y;
            x--;y--;
            dsu.union_r(x,y);
        }
        else{
            int x;
            cin>>x;
            x--;
            cout<<dsu.calc(x)<<"\n";
        }
    }
    return 0;
}