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
        for(int i=1;i<n;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int cnt0=0,cnt1=0;
        function<void(int,int,int)> dfs =[&](int src,int par,int clr){
            clr?cnt1++:cnt0++;
            for(auto it:adj[src]){
                if(it==par)continue;
                dfs(it,src,1-clr);
            }
        };
        dfs(1,-1,0);
        cout<<cnt1*cnt0 - (n-1)<<"\n";
    }
    return 0;
}