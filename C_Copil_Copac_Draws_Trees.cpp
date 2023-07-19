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
        map<pair<int,int>,int> order;
        vector<vector<int>> adj(n+1);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            order[{a,b}]=i+1;
        }
        
        int op=1;
        function<void(int,int,int,int)> dfs=[&](int src,int ord,int opr,int par){
            op=max(op,opr);
            for(auto it : adj[src]){
                if(it!=par)
                {
                    int temp = max(order[{src,it}],order[{it,src}]);
                    if(temp<ord){
                        dfs(it,temp,opr+1,src);
                    }
                    else dfs(it,temp,opr,src);
                }
            }
        };
        dfs(1,-1,1,-1);
        
        cout<<op<<"\n";

    }
    return 0;
}