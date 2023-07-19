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
        int mx=max(m,n)*2;
        vector<int> distance(mx+1,-1);
        queue<int> bfs;
        bfs.push(n);
        distance[n]=0;
        while(!bfs.empty()){
            int t =2* bfs.front();
            if(t>0 && t<=mx && distance[t]==-1){
                bfs.push(t);
                distance[t]=distance[t/2]+1;
            }
            t=bfs.front()-1;
            if(t>0 && t<=mx && distance[t]==-1){
                bfs.push(t);
                distance[t]=distance[t+1]+1;
            }
            bfs.pop();

        }
        cout<<distance[m]<<"\n";
    }
    return 0;
}
