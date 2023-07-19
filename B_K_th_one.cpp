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
    vector<int> vec;

    void init(int n){
        size=1;
        while(size<n) size*=2;
        vec.assign(2*size,0);
    }
    
    void build(vector<int> &a,int x,int lx,int rx){
        if(rx-lx==1){
            if(lx<a.size())vec[x]=a[lx];
            return; 
        }
        int mid = (lx+rx)/2;
        build(a,2*x+1,lx,mid);
        build(a,2*x+2,mid,rx);
        vec[x]= vec[2*x+1]+vec[2*x+2];

    }

    void modify(int i,int v ,int x,int lx,int rx){
        if(rx-lx == 1){
            vec[x]=v;
            return;
        }
        int mid = (lx+rx)/2;
        if(i<mid)
            modify(i,v,2*x+1,lx,mid);
        else    
            modify(i,v,2*x+2,mid,rx);
        vec[x]= vec[2*x+1]+vec[2*x+2];
    }

    int calc(int k,int x,int lx,int rx){
        if(rx-lx == 1)return lx;
        int mid = (lx+rx)/2, lb= vec[2*x+1];
        if(k<lb)
            return calc(k,2*x+1,lx,mid);
        else   
            return calc(k-lb, 2*x+2,mid,rx);
        
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
                int val;
                cin>>val;
                a[val] = 1-a[val];
                st.modify(val,a[val],0,0,st.size);
            }
            else{
                int k;
                cin>>k;
                cout<<st.calc(k,0,0,st.size)<<"\n";
            }
        }
    }
    return 0;
}