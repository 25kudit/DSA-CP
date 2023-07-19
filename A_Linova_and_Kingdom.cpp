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
        int n,k;
        cin>>n>>k;
        vector<vector<int>> adj(n+1);
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> sub(n+1,0),cnt(n+1,0);
        function<void(int,int)> dfs= [&](int child,int par){
            cnt[child]=cnt[par]+1;
            sub[child]=1;
            for(auto it : adj[child]){
                if(it == par)continue;
                dfs(it,child);
                sub[child]+=sub[it];
            }
        };
        dfs(1,0);
        vector<int> ans;
        for(int i=1;i<=n;i++)ans.push_back(cnt[i]-sub[i]);
        int sum=0;
        sort(ans.begin(),ans.end(),greater<int> ());
        for(int i=0;i<k;i++)sum+=ans[i];
        cout<<sum<<"\n";
        
    }
    return 0;
}