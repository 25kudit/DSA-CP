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
        vector<string> s(n);
        for(int i=0;i<n;i++)cin>>s[i];
        int flag=0;
        vector<int> indeg(26,0);
        vector<vector<int>> adj(26);
        for(int i=1;i<n;i++){
            int mn=min(s[i-1].size(),s[i].size());
            int it=0;
            while(it<mn && s[i-1][it]==s[i][it])it++;
            if(it == mn){
                if(s[i].size()<s[i-1].size()){
                    cout<<"Impossible\n";
                    flag=1;
                    break;
                }
            }
            else{
                indeg[s[i][it]-'a']++;
                adj[s[i-1][it]-'a'].push_back(s[i][it]-'a');
            }
        }
        // continue;
        if(flag)continue;
        string ans="";
        queue<int> q;
        for(int i=0;i<26;i++)
            if(indeg[i] == 0)
                q.push(i);
        while(q.empty()==false){
            int t = q.front();
            q.pop();
            ans+=(char)(t+'a');
            for(auto it:adj[t]){
                indeg[it]--;
                if(indeg[it]==0){
                    q.push(it);
                    
                }
            }
        } 
        if(ans.size()!=26)
            cout<<"Impossible\n";
        else cout<<ans<<"\n";
        
    }
    return 0;
}