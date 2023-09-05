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
        vector<vector<int>> tree(n+1);
        for(int i=2;i<=n;i++){
            int t;
            cin>>t;
            tree[i].push_back(t);
            tree[t].push_back(i);
        }
        int m = log2(n+1)+1;
        vector<vector<int>> up(n+1,vector<int> (m,-1));

        //binary lifting
        function<void(int,int)> binary_lift = [&](int src,int par){
            up[src][0]=par;
            for(int i=1;i<m;i++){
                if(up[src][i-1]!=-1)
                    up[src][i]=up[up[src][i-1]][i-1];
            }
            for(auto it : tree[src]){
                if(it != par)
                    binary_lift(it,src);
            }
        };

        binary_lift(1,-1);

        function<int(int,int)> query=[&](int node,int k){
            if(node==-1 || k==0)return node;

            for(int i=19;i>=0;i--){
                if(k>=(1<<i))
                    return query(up[node][i],k-(1<<i));
            }
            return (int)-1;
        };

        while(q--){
            int node,k;
            cin>>node>>k;
            cout<<query(node,k)<<"\n";
        }


    }
    return 0;
}