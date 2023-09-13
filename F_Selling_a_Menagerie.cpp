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
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> tree(n),indeg(n),cost(n),res,visited(n,0);
        for(int i=0;i<n;i++){
            cin>>tree[i];
            tree[i]--;
            indeg[tree[i]]++;
        }
        for(int i=0;i<n;i++)cin>>cost[i];
        queue<int> topo;
        for(int i=0;i<n;i++)
            if(indeg[i]==0)
                topo.push(i);
        
        while(!topo.empty()){
            int tp = topo.front();
            topo.pop();
            res.push_back(tp);
            visited[tp]=1;
            indeg[tree[tp]]--;
            if(indeg[tree[tp]]==0)
                topo.push(tree[tp]);
        }
        function<void(vector<int> &,int,int)> dfs = [&](vector<int> &cycle,int src,int par){
            visited[src]=1;
            cycle.push_back(src);
            if(visited[tree[src]]==0)
                dfs(cycle,tree[src],src);
        };

        
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                vector<int> cycle;
                dfs(cycle,i,-1);
                
                int mni=0;
                for(int j=0;j<cycle.size();j++){
                    if(cost[cycle[mni]]>cost[cycle[j]])mni=j;
                }
                for(int j=0;j<cycle.size();j++){
                    res.push_back(cycle[(mni+1+j)%cycle.size()]);
                }
            }
        }
        for(auto it :res)cout<<it+1<<" ";
        cout<<"\n";


    }
    return 0;
}