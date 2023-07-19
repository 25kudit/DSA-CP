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
    vector<int> mx;

    void init(int n){
        size =1;
        while(size<n)size*=2;
        mx.resize(2*size);
    }

    void build(vector<int> &a,int x,int lx,int rx){
        if(rx-lx ==1){
            if(lx<a.size())mx[x]=a[lx];
            return;
        }
        int mid = (lx+rx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        mx[x]=max(mx[2*x+1],mx[2*x+2]);
    }

    void modify(int i,int v,int x,int lx,int rx){
        if(rx-lx ==1){
            mx[x]=v;
            return;
        }
        int mid=(lx+rx)/2;
        if(i<mid)
            modify(i,v,2*x+1,lx,mid);
        else
            modify(i,v,2*x+2,mid,rx);
        
        mx[x]=max(mx[2*x+1],mx[2*x+2]);
    }

    int query(int k,int x,int lx,int rx){
        if(mx[x]<k)return -1;
        if(rx - lx ==1) return lx;
        int mid =(lx+rx)/2;
        int res = query(k,2*x+1,lx,mid);
        if(res == -1)
            res = query(k,2*x+2,mid,rx);
        return res;

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
                st.modify(i,v,0,0,st.size);
            }
            else{
                int k;
                cin>>k;
                cout<<st.query(k,0,0,st.size)<<"\n";
            }
        }

    }
    return 0;
}