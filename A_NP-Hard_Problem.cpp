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
        vector<vector<int>> adj(n+1);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> color(n+1,-1);
        function<bool(int,int)> bfs = [&](int src,int clr){
            queue<int> q;
            q.push(src);
            color[src]= clr;
            while(!q.empty()){
                int t= q.front();
                q.pop();
                for(auto it : adj[t]){
                    if(color[it]==-1){
                        color[it] = 1-color[t];
                        q.push(it);
                    }
                    if(color[it] == color[t])return 0;
                }
            }
            return 1;
        };
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
                // color[i]=0;
                if(adj[i].size()==0)continue;
                if(bfs(i,0)==false){
                    cout<<-1<<"\n";
                    return 0;
                }
            }
        }
        // if(!f)
        {
            vector<int> s1,s2;
            for(int i=1;i<=n;i++){
                if(color[i]==0)s1.push_back(i);
                else if(color[i]==1)s2.push_back(i);
            }
            cout<<s1.size()<<"\n";
            for(auto it:s1)cout<<it<<" ";
            cout<<"\n";
            cout<<s2.size()<<"\n";
            for(auto it:s2)cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}