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

    void init(int n){
        size=1;
        while(size<n)size*=2;
        sums.assign(2*size,0);
        
    }

    void modify(int i,int val,int x,int lx,int rx){
        if(rx-lx ==1 ){
            sums[x] = val;
            if(i%2)sums[x]*=-1;
            return;
        }
        int m = (lx+rx)/2;
        if(i<m)modify(i,val,2*x+1,lx,m);
        else modify(i,val,2*x+2,m,rx);

        sums[x]=sums[2*x+1]+sums[2*x+2];
        
    }

    int calc(int l,int r,int x,int lx,int rx){
        if(rx<=l || lx>=r)return 0;
        if(lx>=l && rx<=r)return sums[x];
        int m = (lx+rx)/2;
        return calc(l,r,2*x+1,lx,m)+calc(l,r,2*x+2,m,rx);
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

        int n;
        cin>>n;
        segtree st;
        st.init(n);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            st.modify(i,t,0,0,st.size);
        }
        int m;
        cin>>m;
        
        while(m--){
            int op;
            cin>>op;
            if(op==0){
                int i,val;
                cin>>i>>val;
                i--;
                st.modify(i,val,0,0,st.size);
            }
            else{
                int l,r;
                cin>>l>>r;
                l--;r--;
                int res = st.calc(l,r+1,0,0,st.size);
                if(l%2)cout<<res*-1<<"\n";
                else cout<<res<<"\n";
            }
        }
        
    }
    return 0;
}