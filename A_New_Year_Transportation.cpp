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


void dfs(vector<int> adj,vector<bool> &visited,int s,int n){
    visited[s]=true;
    if(adj[s]<n && visited[adj[s]]==false)
        dfs(adj,visited,adj[s],n);
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n,ind;
        cin>>n>>ind;
        vector<int> a(n),adj(n);
        vector<bool> visited(n,0);
        for(int i=0;i<n-1;i++)cin>>a[i];
        a[n-1]=0;
        for(int i=0;i<n;i++){
            adj[i]=i+a[i];
        }
        dfs(adj,visited,0,n);
        if(visited[ind-1]==false)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}