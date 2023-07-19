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
        int n,m;
        cin>>n>>m;
        map<int,int> deg;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            deg[u]++;
            deg[v]++;
        }
        map<int,int> freq;
        for(auto it: deg){
            freq[it.second]++;
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        
        int x=-1;
        for(auto it :freq)
            if(it.second==1)x=it.first;

        if(x==-1){
            for(auto it:deg)
                if(it.second != 1)x=it.second;
        }
        cout<<x<<" "<<freq[1]/x<<"\n";
    }
    return 0;
}