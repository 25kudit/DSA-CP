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
        vector<string> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<pair<int,int>> vp;
        int  i = vp[0].first;
        vector<bool> ind(26,0);
        for(int i=0;i<n;i++){
            for(char c : a[i])
                ind[c-'a']=1;
        }
        vector<unordered_set<int>> adj(26);
        for(string s :a){
            int k = s.size();
            for(int i=0;i<k;i++){
                for(int j=i+1;j<k;j++){
                    if(s[i]==s[j])continue;
                    adj[s[i]-'a'].insert(s[j]-'a');
                    adj[s[j]-'a'].insert(s[i]-'a');
                }
            }
        }
        vector<bool> visited(26,0);
        function<void(int)> dfs=[&] (int src){
            visited[src]=1;
            for(auto it : adj[src]){
                if(visited[it]==0)
                    dfs(it);
            }
        };
        int cnt =0;
        for(int i=0;i<26;i++){
            if(visited[i]==false && ind[i]==1){
                cnt++;
                dfs(i);
            }
        }
        cout<<cnt<<"\n";

    }
    return 0;
}