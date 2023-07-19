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

//check if the graph is fully connected or not

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
            a--;
            b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<bool> visited(n,0);
        vector<int> gather;
        function<void(int)> dfs=[&](int source){
            visited[source]=true;
            gather.push_back(source);
            for(auto it:adj[source]){
                if(visited[it]==false)
                    dfs(it);
            }
        };
        int f=0;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                dfs(i);
                for(auto it:gather){
                    if(adj[it].size()!=gather.size()- 1){
                        f=1;
                        break;
                    }
                }
                gather.clear();
                if(f)break;
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}