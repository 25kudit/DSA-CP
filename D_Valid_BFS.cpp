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


void printqueue(queue<int> q){
    while(q.size()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        queue<int> bfs;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            bfs.push(t);
        }
        if(bfs.front()!=1){
            cout<<"No\n";
            continue;
        }
        vector<bool> visited(n+1,0);
        queue<int> q;
        q.push(1);
        visited[1]=1;
        bfs.pop();
        // printqueue(bfs);
        while(!q.empty()){
            int t = q.front();
            q.pop();
            set<int> ele;
            for(auto it : adj[t]){
                if(visited[it]==false){
                    // cout<<it<<" ";
                    ele.insert(it);
                }
            }
            
            while(ele.size()){
                int k=bfs.front();
                if(ele.find(k)==ele.end()){
                    cout<<"No\n";
                    return 0;
                }
                bfs.pop();
                ele.erase(k);
                q.push(k);
                visited[k]=1;
            }
            ele.clear();
        }
        cout<<"Yes\n";
    }
    return 0;
}