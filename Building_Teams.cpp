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
        vector<vector<int>> adj(n);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            a--;b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        // for(auto it:adj[5])cout<<it<<" ";
        // cout<<"\n";
        vector<bool> visited(n,false);
        vector<int> ans(n);
        function<bool(int,int)> bfs=[&](int source,int team){
            ans[source]=team;
            visited[source]=true;
            queue<int> q;
            q.push(source);
            while(q.empty()==false){
                int t = q.front();
                // cout<<t+1<<"->";
                q.pop();
                for(auto it: adj[t]){
                    if(visited[it]==false){
                        visited[it]=true;
                        q.push(it);
                        if(ans[t]==1)ans[it]=2;
                        else ans[it]=1;
                    }
                    else{
                        if(ans[it]==ans[t])
                            return false;
                    }
                }
            }
            // cout<<"\n";
            // visited[source]=true;
            // ans[source]=team;
            // cout<<source+1<<"->";
            // for(auto it:adj[source]){
            //     if(visited[it]==false){
            //         if(team ==1) dfs(it,2);
            //         else dfs(it,1);
            //     }
            //     else{
            //         if(ans[it]==ans[source])
            //             return false;
            //     }
            // }
            return true;
        };
        int f=0;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                // ans[i]=1;
                bool t=bfs(i,1);
                if(t==false){
                    f=1;
                    break;
                }
            }
        }
        if(f)cout<<"IMPOSSIBLE\n";
        else{
            for(auto it:ans)cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}