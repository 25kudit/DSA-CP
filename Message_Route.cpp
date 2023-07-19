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
            a--;
            b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<pair<bool,int>> visited(n,{false,-1});
        vector<int> serial;
        queue<int> q;
        q.push(0);
        visited[0].first=true;
        while(q.empty()==false){
            int source = q.front();
            // serial.push_back(source);
            q.pop();
            for(auto it:adj[source]){
                if(visited[it].first==false){
                    visited[it].first=true;
                    visited[it].second=source;
                    q.push(it);
                }
            }
        }
        if(visited[n-1].first==false){
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        int curr=n-1;
        serial.push_back(n);
        while(curr!=0){
            serial.push_back(visited[curr].second+1);
            curr=visited[curr].second;
        }
        reverse(serial.begin(),serial.end());
        cout<<serial.size()<<"\n";
        for(auto it:serial)cout<<it<<" ";
        
    }
    return 0;
}