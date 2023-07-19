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
        int n,gp;
        cin>>n>>gp;
        vector<vector<int>> group(gp),user(n);
        for(int i=0;i<gp;i++){
            int k;
            cin>>k;
            for(int j=0;j<k;j++){
                int t;
                cin>>t;
                group[i].push_back(t-1);
                user[t-1].push_back(i);
            }
        }
        // for(auto it:user){
        //     for(auto i:it)cout<<i<<" ";
        //     cout<<"\n";
        // }
        // continue;
        vector<int> ans;
        vector<bool> visited_node(n,0),visited_grp(gp,0);
        function<void(int)> dfs=[&](int source){
            visited_node[source]=true;
            ans.push_back(source);
            for(auto grpofuser:user[source]){
                if(visited_grp[grpofuser]==true)continue;
                visited_grp[grpofuser]=true;
                for(auto it:group[grpofuser]){
                    if(visited_node[it]==false)
                    {   
                        dfs(it);
                    } 
                }
            }
        };
        vector<int> res(n);
        for(int i=0;i<n;i++){
            if(visited_node[i]==false){
                dfs(i);
                for(auto it:ans)
                    res[it]=ans.size();
                ans.clear();
            }
            
        }
        for(auto it:res) cout<<it<<" ";

    }
    return 0;
}