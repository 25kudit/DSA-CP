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
        vector<vector<int>> adj(n);
        bool ok =true;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            a--;b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
            if(a==b || adj[a].size()>2 || adj[b].size()>2)ok=false;
        }
        if(!ok){
            cout<<"NO\n";
            continue;
        }
        vector<bool> visited(n,0);
        function<int(int)> dfs =[&](int src){
            visited[src]=true;
            for(auto it : adj[src]){
                if(visited[it]==0)
                    return 1+dfs(it);
            }
            return 1ll;
        };
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                int len=dfs(i);
                if(len%2){
                    ok=false;
                    break;
                }
            }
        }
        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}