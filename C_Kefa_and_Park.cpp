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
        vector<int> cats(n+1);
        for(int i=1;i<=n;i++)cin>>cats[i];
        vector<vector<int>> adj(n+1);
        vector<bool> visited(n+1,0);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int ans=0;
        function<void(int,int,int)> dfs=[&](int cnt,int source,int parent){
            if(cats[source]==1)cnt++;
            else cnt=0;

            if(cnt>m)return;
            int f=0;
            for(auto it:adj[source]){
                if(it==parent)continue;
                f=1;
                dfs(cnt,it,source);
            }
            if(!f)ans++;
        };
        dfs(0,1,-1);         
        cout<<ans<<"\n";

    }
    return 0;
}