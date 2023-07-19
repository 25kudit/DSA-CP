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
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        float sum=0,cnt=0;
        vector<int> dist(n+1,-1);
        dist[1]=0;
        queue<int> q;
        q.push(1);
        int x=0;
        while(q.empty()==false){
            int t = q.front();
            q.pop();
            if(adj[t].size()==1){
                sum+=dist[t];
                cnt++;
                continue;
            }
            for(auto it:adj[t]){
                if(dist[it]==-1){
                    dist[it]=dist[t]+1;
                    q.push(it);
                }
            }
        }
        cout<<fixed<<setprecision(15)<<sum/cnt<<"\n";
    }
    return 0;
}