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
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        vector<pair<int,int>> vp;
        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            vp.push_back({a,b});
        }
        int f=0;
        for(auto it : vp){
            int s = abs(it.first-x)+abs(it.second-y);
            if(s%2==0){
                f=1;
                break;
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}