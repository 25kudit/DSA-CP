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
#define mod (int)1e9+7


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
        vector<int> cost(n+1);
        for(int i=1;i<=n;i++)cin>>cost[i];
        int m;
        cin>>m;
        vector<vector<int>> adj(n+1),tadj(n+1);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            tadj[b].push_back(a);
        }
        vector<int> topo;
        vector<bool> visited(n+1,0);
        
        function<void(int)> toposort=[&](int src){
            visited[src]=true;
            for(auto it : adj[src]){
                if(visited[it]==false)
                    toposort(it);
            }
            topo.push_back(src);
        };
        
        for(int i=1;i<=n;i++){
            if(visited[i]==false)
                toposort(i);
        }

        reverse(topo.begin(),topo.end());
        for(int i=0;i<=n;i++)visited[i]=false;
        vector<int> comp;
        function<void(int)> dfs = [&](int src){
            visited[src]=true;
            comp.push_back(src);
            for(auto it :tadj[src]){
                if(visited[it]==false)
                    dfs(it);
            }
        };

        int tot=0,ways=1;
        for(int i=0;i<n;i++){
            if(visited[topo[i]]==false){
                comp.clear();
                dfs(topo[i]);

                int mn=INT_MAX,freq=0;
                for(auto it : comp)mn=min(mn,cost[it]);
                for(auto it : comp)
                    if(cost[it]==mn)
                        freq++;
                
                tot+=mn;
                (ways*=freq)%=mod;
            }
        }
        cout<<tot<<" "<<ways<<"\n";
    }
    return 0;
}