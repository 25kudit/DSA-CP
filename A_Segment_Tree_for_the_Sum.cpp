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
    vector<int> sums;

    void init (int n){
        size=1;
        while(size<n)size*=2;
        sums.assign(2*size,0ll);
    }
    void set(int i,int v,int x,int lx,int rx){
        if(rx-lx==1){
            sums[x]= v;
            return;
        }
        int mid = (lx+rx)/2;
        if(i<mid)
            set(i,v,2*x+1,lx,mid);
        else   
            set(i,v,2*x+2,mid,rx);
        
        sums[x]=sums[2*x+1]+sums[2*x+2];
    }
    int calc(int l,int r,int x,int lx,int rx){
        if(lx>=r || l>=rx)return 0ll;
        if(lx>=l && rx<=r)return sums[x];
        int mid=(lx+rx)/2;
        int s1=calc(l,r,2*x+1,lx,mid);
        int s2=calc(l,r,2*x+2,mid,rx);
        return s1+s2;
    }

    void build(vector<int> &a,int x,int lx,int rx){
        if(rx-lx == 1){
            if(lx<=a.size())sums[x]=a[lx];
            return;
        }
        int m = (lx+rx)/2;
        build(a,2*x+1,lx,m);
        build(a,2*x+2,m,rx);
        sums[x]=sums[2*x+1]+sums[2*x+2];
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
        int n,q;
        cin>>n>>q;
        segtree st;
        st.init(n);
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        st.build(a,0,0,st.size);
        
        while(q--){
            int op;
            cin>>op;
            if(op == 1){
                int i,t;
                cin>>i>>t;
                st.set(i,t,0,0,st.size);
            }
            else{
                int l,r;
                cin>>l>>r;
                cout<<st.calc(l,r,0,0,st.size)<<"\n";
            }
        }
    }
    return 0;
}