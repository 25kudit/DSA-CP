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
        vector<pair<int,int>> vp(n);
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            vp[i]={a,b};
        }
        // cout<<"hi\n";
        // return 0;
        sort(vp.begin(),vp.end());
        int mn = vp[0].second;
        for(int i=1;i<n;i++){
            if(mn<=vp[i].second)mn=vp[i].second;
            else mn=vp[i].first;
        }
        cout<<mn<<"\n";

    }
    return 0;
}