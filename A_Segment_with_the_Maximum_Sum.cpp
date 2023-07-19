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

struct item {
    int sum,pre,suf,mx;
};

struct segtree{
    int size;
    vector<item> v;

    item help(item a,item b){
        item res;
        res.sum = a.sum+b.sum;
        res.mx = max({a.mx,b.mx,a.suf+b.pre});
        res.pre= max(a.pre,a.sum+b.pre);
        res.suf=max(b.suf,a.suf+b.sum);
        return res;
    }

    item assign(int v){
        item res;
        res.mx=max(0ll,v);
        res.pre=res.suf=res.sum=v;
        return res;
    }

    void init(int n){
        size=1;
        while(size<n)size*=2;
        v.resize(2*size);
    }

    void build(vector<int> &a , int x, int lx,int rx){
        if(rx-lx==1){
            if(lx<a.size())
                v[x]=assign(a[lx]);
            return;
        }
        int mid = (lx+rx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        v[x]=help(v[2*x+1],v[2*x+2]);
    }

    void modify(int i,int val, int x, int lx,int rx){
        if(rx - lx ==1){
            v[x] = assign(val);
            return;
        }
        int mid = (lx+rx)/2;
        if(i<mid)
            modify(i,val,2*x+1,lx,mid);
        else    
            modify(i,val,2*x+2,mid,rx);

        v[x] = help(v[2*x+1],v[2*x+2]);
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
        for(int i=0;i<n;i++) cin>>a[i];

        segtree st;
        st.init(n);
        st.build(a,0,0,st.size);
        cout<<st.v[0].mx<<"\n";
        while(m--){
            int i,v;
            cin>>i>>v;
            st.modify(i,v,0,0,st.size);
            cout<<st.v[0].mx<<"\n";
        }

    }
    return 0;
}