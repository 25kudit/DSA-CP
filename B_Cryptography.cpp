#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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

struct mat
{
    int a, b, c, d;
};

struct segtree
{
    int size;
    vector<mat> prod;

    mat idenity()
    {
        mat m;
        m.a = 1;
        m.b = 0;
        m.c = 0;
        m.d = 1;
        return m;
    }

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        prod.assign(2 * size,idenity());
    }

    mat multiply(mat a,mat b,int md){
        mat res;
        res.a=(a.a*b.a + a.b*b.c)%md;
        res.b=(a.a*b.b + a.b*b.d)%md;
        res.c=(a.c*b.a + a.d*b.c)%md;
        res.d=(a.c*b.b + a.d*b.d)%md;
        return res;
    }

    void print(mat res){
        cout<<res.a<<" "<<res.b<<"\n";
        cout<<res.c<<" "<<res.d<<"\n";
    }

    void modify(int i,mat val,int x,int lx,int rx,int md){
        if(rx-lx ==1){
            prod[x]=val;
            return;
        }
        int m = (lx+rx)/2;
        if(i<m)
            modify(i,val,2*x+1,lx,m,md);
        else    
            modify(i,val,2*x+2,m,rx,md);

        prod[x]=multiply(prod[2*x+1],prod[2*x+2],md);
    }

    mat calc(int l,int r,int x,int lx,int rx,int md){
        if(l>=rx || r<=lx)return idenity();
        if(l<=lx && r>=rx)return prod[x];
        int m=(lx+rx)/2;
        return multiply(calc(l,r,2*x+1,lx,m,md),calc(l,r,2*x+2,m,rx,md),md);
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
        int md,n,m;
        cin>>md>>n>>m;
        segtree st;
        st.init(n);
        for(int i=0;i<n;i++){
            mat m;
            cin>>m.a>>m.b>>m.c>>m.d;
            st.modify(i,m,0,0,st.size,md);
        }

        // for(mat it : st.prod){
        //     st.print(it);
        //     cout<<"\n";
        // }
        while(m--){
            int l,r;
            cin>>l>>r;
            l--;
            // r--;
            mat res = st.calc(l,r,0,0,st.size,md);
            st.print(res);
            cout<<"\n";
        }
    }
    return 0;
}