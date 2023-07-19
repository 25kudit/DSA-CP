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

struct segtree{
    int size;
    vector<pair<int,int>> mn;   //{val,count}

    void init(int n){
        size=1;
        while(size<n)size*=2;
        
        mn.assign(2*size,{INT_MAX,0});
    }

    pair<int,int> comp(pair<int,int> a,pair<int,int> b){
        if(a.first<b.first)return a;
        if(a.first>b.first)return b;
        return {a.first,a.second+b.second};
    }

    void build(vector<int> &a, int x, int lx,int rx){
        if(rx - lx ==1 ){
            if(lx < a.size())
                mn[x] = {a[lx],1};
            return ;
        }
        int mid = (lx+rx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        mn[x] = comp(mn[2*x+1],mn[2*x+2]);
    }

    void set(int i,int v, int x,int lx,int rx){
        if(rx-lx == 1){
            mn[x]={v,1};
            return;
        }
        int mid = (lx+rx)/2;
        if(i<mid)
            set(i,v,2*x+1,lx,mid);
        else 
            set(i,v,2*x+2,mid,rx);
        mn[x] =comp(mn[2*x+1],mn[2*x+2]);
    }

    pair<int,int> find(int l,int r, int x, int lx,int rx){
        if(l>=rx || r<=lx)return {INT_MAX,0};
        if(l<=lx && r>=rx)return mn[x];
        int mid = (lx+rx)/2;
        auto p1 = find(l,r,2*x+1 , lx,mid);
        auto p2 = find(l,r,2*x+2,mid,rx);
        return comp(p1,p2);
    }

    void print(){
        for(auto it : mn)cout<<it.first<<" "<<it.second<<"\n";
    }

};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        segtree st;
        st.init(n);
        st.build(a,0,0,st.size);

        while(m--){
            int op;
            cin>>op;
            if(op==1){
                int i,v;
                cin>>i>>v;
                st.set(i,v,0,0,st.size);

            }
            else{
                int l,r ; 
                cin>>l>>r;
                auto ans = st.find(l,r,0,0,st.size);
                cout<<ans.first<<" "<<ans.second<<"\n";
            }
        }
    }
    return 0;
}