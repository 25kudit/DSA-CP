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
        map<string , vector<string>> mp;
        for(int i=0;i<n;i++){
            string a,b,c;
            cin>>a>>b>>c;
            for(auto &it:a)it=tolower(it);
            for(auto &it:c)it=tolower(it);
            mp[c].push_back(a);
        }
        map<string,int> dist;
        queue<string> q;
        q.push("polycarp");
        dist["polycarp"]=1;
        while(q.empty()==false){
            string t = q.front();
            q.pop();
            for(auto it: mp[t]){
                if(dist.find(it)==dist.end()){
                    q.push(it);
                    dist[it]=dist[t]+1;
                }
            }
        }
        int mx =INT_MIN;
        for(auto it:dist)mx = max(mx,it.second);
        cout<<mx<<"\n";
    }
    return 0;
}