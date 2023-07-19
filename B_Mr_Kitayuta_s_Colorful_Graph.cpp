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
        vector<vector<pair<int,int>>> adj(n+1);
        for(int i=0;i<m;i++){
            int a,b,c;
            cin>>a>>b>>c;
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }
        // for(auto it: adj ){
        //     for(auto i : it){
        //         cout<<i.first<<" "<<i.second<<"   ";
        //     }
        //     cout<<"\n";
        // }

        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            int ans=0;
            vector<vector<bool>> visited(n+1,vector<bool> (m+1,0));
            function<void(int,int)> dfs=[&](int source,int prev){
                visited[source][prev]=true;
                if(source == y){
                    ans++;
                    return;
                }
                for(auto it:adj[source]){
                    // cout<<visited[it.first][it.second]<<"   ";
                    if(visited[it.first][it.second]==false && (it.second==prev||prev==0)){
                        // cout<<it.first<<" "<<it.second<<"\n";
                        dfs(it.first,it.second);
                    }
                }

            };
            dfs(x,0);
            cout<<ans<<"\n";
        }
    }
    return 0;
}