#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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
        int n,k;
        cin>>n>>k;
        vector<int> adj[n];
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            a--;b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        vector<vector<int>> dist(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            dist[i][i]=0;
            queue<int> q;
            q.push(i);
            while(q.empty()==false){
                int source = q.front();
                q.pop();
                for(auto it:adj[source]){
                    if(dist[i][it]==-1){
                        dist[i][it]=dist[i][source]+1;
                        q.push(it);
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(dist[i][j]==k)
                    ans++;
            }
        }
        cout<<ans;
    }
    return 0;
}