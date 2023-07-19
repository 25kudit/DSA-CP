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
        vector<vector<int> > adj(n+1);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        set<int> s;
        vector<int> visited(n+1,0),ans;
        s.insert(1);
        // visited[1]=1;
        // ans.push_back(1);
        int x=0;
        while(s.size()>0){
            int t = *s.begin();
            s.erase(t);
            visited[t]=1;
            ans.push_back(t);
            for(auto it: adj[t]){
                if(visited[it]==0){
                    s.insert(it);
                }
            }
        }
        for(auto it:ans)cout<<it<<" ";
        cout<<"\n";
        
    }
    return 0;
}