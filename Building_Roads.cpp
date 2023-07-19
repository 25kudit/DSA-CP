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
        // for(auto it:adj){
        //     for(auto i : it)cout<<i<<" ";
        //     cout<<"\n";
        // }
        vector<bool> visited(n,false);

        function<void(int)> dfs=[&](int s){
            visited[s]=true;
            for(auto it:adj[s]){
                // cout<<s<<": "<<it<<"\n";
                if(visited[it]==false)
                    dfs(it);
            }
        };

        vector<pair<int,int>> ans;
        int source=-1;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                // cout<<i<<" ";
                if(source!=-1)ans.push_back({source,i+1});
                source=i+1;
                dfs(i);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it.first<<" "<<it.second<<"\n";

    }
    return 0;
}