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
        vector<vector<int>> adj(n+1);
        set<pair<int,int>> st;
        int x=0;
        for(int i=1;i<=n;i++){
            int t;
            cin>>t;
            if(st.find({t,i})==st.end()){
                st.insert({i,t});
                adj[i].push_back(t);
                adj[t].push_back(i);
            }
            else x++;
        }
        vector<bool> visited(n+1,0);
        vector<vector<int>> comp;
        vector<int> temp;
        int cycle=0;
        function<void(int,int)> dfs=[&](int s,int p){
            visited[s]=1;
            temp.push_back(s);
            for(auto it : adj[s]){
                if(it!=p){
                    if(visited[it]==0)dfs(it,s);
                    else cycle++;
                }
            }
        };
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                dfs(i,-1);
                comp.push_back(temp);
                temp.clear();
            }
        }
        int mn,mx;
        if(x%2){
            mn=cycle+1;
        }
        else mn=cycle;
        if(cycle>0)mx=x+1;
        else mx=x;
        cout<<mn<<" "<<mx<<"\n";
        

    }
    return 0;
}