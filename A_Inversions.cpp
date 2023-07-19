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

    void modify(int i,int x,int lx,int rx){
        if(rx-lx ==1){
            sums[x]=1;
            return;
        }
        int mid = (lx+rx)/2;
        if(i<mid)
            modify(i,2*x+1,lx,mid);
        else    
            modify(i,2*x+2,mid,rx);

        sums[x]=sums[2*x+1]+sums[2*x+2];
    }

    int calc(int l,int r,int x, int lx,int rx){
        if(l>=rx || r<=lx)return 0;
        if(l<=lx && r>=rx)return sums[x];
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
        vector<int> ans;
        segtree st;
        st.init(n+1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans.push_back(st.calc(x+1,n+1,0,0,st.size));
            st.modify(x,0,0,st.size);
        }
        for(auto it : ans)cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}