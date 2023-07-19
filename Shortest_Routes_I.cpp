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
        int n,m;
        cin>>n>>m;
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<m;i++){
            int a,b,c;
            cin>>a>>b>>c;
            a--;
            b--;
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        vector<int> dist(n,-1);
        dist[0]=0;
        queue<int> q;
        q.push(0);
        while(q.empty()==false){
            int s=q.front();
            q.pop();
            for(auto it:adj[s]){
                if(dist[it.first]==-1){
                    dist[it.first]=dist[s]+dist[it.second];
                    q.push(it.first);
                }
            }
        }
        for(auto it:dist)cout<<it<<" ";
        // function<void(int)> bfs=[&](int u){
        //     queue<int> 
        // };
        // bfs(0);
    }
    return 0;
}