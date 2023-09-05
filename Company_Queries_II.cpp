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
            tree[t].push_back(i);
            tree[i].push_back(t);
        }
        int m = log2(n+1)+1;
        vector<vector<int>> up(n+1,vector<int> (m,-1));
        vector<int> lvl(n+1,0);


        function<void(int,int)> binary_lift=[&](int src,int par){
            up[src][0]=par;
            for(int i=1;i<m;i++){
                if(up[src][i-1]!=-1)
                    up[src][i]=up[up[src][i-1]][i-1];
            }
            for(auto child:tree[src]){
                if(child!=par)
                    binary_lift(child,src);
            }
        };
        binary_lift(1,-1);

        function<int(int,int)> lift=[&](int src,int jump){
            if(src==-1 || jump==0)return src;
            for(int i=m-1;i>=0;i--){
                if(jump >= (1<<i)){
                     return lift(up[src][i],jump-(1<<i));
                }
            }
            return (int)-1;
        };

        function<void(int,int,int)> dfs = [&](int src,int par,int l){
            lvl[src]=l;
            for(auto child : tree[src]){
                if(child!=par)
                    dfs(child,src,l+1);
            }
        };
        dfs(1,-1,0);

        auto ans_query= [&](int u,int v){
            if(lvl[u]>lvl[v])swap(u,v);
            int diff = lvl[v]-lvl[u];
            v=lift(v,diff);
            int low = 0,high=lvl[v],ans =-1;
            while(low<=high){
                int mid = (low+high)/2;
                int x1=lift(u,mid),x2=lift(v,mid);
                if(x1==x2){
                    ans = mid;
                    high=mid-1;
                }
                else low=mid+1;
            }
            return lift(u,ans);
            
        };

        auto ans_query_fast= [&](int u,int v){
            if(lvl[u]>lvl[v])swap(u,v);
            int diff = lvl[v]-lvl[u];
            v=lift(v,diff);
            if(u==v)return u;
            for(int i=m-1;i>=0;i--){
                if(up[u][i]!=up[v][i]){
                    u=up[u][i];
                    v=up[v][i];
                }
            }
            return lift(u,1);
            
        };

        while(q--){
            int n1,n2;
            cin>>n1>>n2;
            cout<<ans_query_fast(n1,n2)<<"\n";
        }


    }
    return 0;
}