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
        vector<int> v(n),res;
        for(int i=0;i<n;i++)cin>>v[i];
        res.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(*res.rbegin()<=v[i])res.push_back(v[i]);
            else{
                res.push_back(v[i]);
                res.push_back(v[i]);
            }
        }
        cout<<res.size()<<"\n";
        for(auto it : res)cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}