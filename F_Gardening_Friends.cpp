#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
    cin >> T;
    while (T--)
    {
        int n, k, c;
        cin >> n >> k >> c;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        auto bfs = [&](int src){
            vector<int> dist(n+1,-1);
            queue<int> q;
            q.push(src);
            dist[src]=0;
            while(!q.empty()){
                int s = q.front();
                q.pop();
                for(auto it : adj[s]){
                    if(dist[it]==-1){
                        dist[it]=dist[s]+1;
                        q.push(it);
                    }
                }
            }
            return dist;
        };
        vector<int> root = bfs(1);
        int df = 1;
        for(int i=1;i<=n;i++){
            if(root[i]>root[df])
                df=i;
        }

        vector<int> down = bfs(df);
        int uf=1;
        for(int i=1;i<=n;i++){
            if(down[i]>down[uf])
                uf=i;
        }
        vector<int> up=bfs(uf);

        int ans = INT_MIN;

        for(int i=1;i<=n;i++){
            ans = max(ans, k*(max(down[i],up[i])) - c*root[i]);
        }
        cout<<ans<<"\n";

    }
    return 0;
}