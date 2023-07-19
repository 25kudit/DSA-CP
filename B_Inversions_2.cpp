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

struct segtree {
    int size;
    vector<int> sums;

    void init(int n){
        size=1;
        while(size<n)size*=2;
        sums.assign(2*size,0);
    }

    void build(int n,int x,int lx,int rx){
        if(rx-lx == 1){
            if(lx<n)sums[x]=1;
            return;
        }
        int m= (lx+rx)/2;
        build(n,2*x+1,lx,m);
        build(n,2*x+2,m,rx);
        sums[x]=sums[2*x+1]+sums[2*x+2];
    }

    void modify(int i,int x,int lx,int rx){
        if(rx - lx ==1){
            sums[x]= 0;
            return;
        }
        int m = (lx+rx)/2;
        if(i<m)
            modify(i,2*x+1,lx,m);
        else    
            modify(i,2*x+2,m,rx);

        sums[x]=sums[2*x+1]+sums[2*x+2];
    }

    int calc(int k,int x,int lx,int rx){
        if(rx-lx ==1){
            return lx;
        }
        int m = (lx+rx)/2;
        if(sums[2*x+1]>k){
            return calc(k,2*x+1,lx,m);
        }
        else    
            return calc(k-sums[2*x+1],2*x+2,m,rx);
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
        st.build(n,0,0,st.size);
        vector<int> ans;

        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=n-1;i>=0;i--){
            int x= a[i];
            int t = st.calc(st.sums[0]-x-1,0,0,st.size);
            ans.push_back(t+1);
            // x--;
            st.modify(t,0,0,st.size);

        }
        reverse(ans.begin(),ans.end());
        for(auto it: ans)cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}