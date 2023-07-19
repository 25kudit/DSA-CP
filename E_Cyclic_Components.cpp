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
vector<int> vertex;

void dfs(int source, vector<vector<int>> &adj, vector<bool> &visited){
    vertex.push_back(source);
    visited[source]=true;
    for(auto it: adj[source]){
        if(visited[it]==false){
            dfs(it,adj,visited);
        }
    }
}

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
        vector<vector<int>> adj(n+1);
        vector<bool> visited(n+1,0);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(visited[i]==false){
                dfs(i,adj,visited);
                int f=0;
                for(auto it:vertex){
                    if(adj[it].size()!=2)
                        f=1;
                }
                if(f==0)ans++;
                vertex.clear();
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}