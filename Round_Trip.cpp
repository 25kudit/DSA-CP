
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// #define int long long
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
        vector<bool> visited(n,0);
        vector<int> parent(n,-1);
        int st =-1,en=-1;

        function<bool(int,int)> dfs=[&](int u,int p){
            visited[u]=true;
            parent[u]=p;
            for(auto it: adj[u]){
                if(it == p)continue;
                if(visited[it]==false){
                    if(dfs(it,u))
                        return true;
                }
                else{
                    st = it;
                    en = u;
                    return true;
                }
            }
            return false;
        };

        int f=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                if(dfs(i,-1)){
                    f=1;
                    break;
                }
            }
        }
        if(!f){
            cout<<" IMPOSSIBLE\n";  
        }
        else{
            vector<int> ans;
            int s = st;
            ans.push_back(st);
            while(st!=en){
                ans.push_back(en);
                en = parent[en];
            }
            ans.push_back(s);
            cout<<ans.size()<<"\n";
            for(auto it: ans)cout<<it+1<<" ";
        }
    }
    return 0;
}