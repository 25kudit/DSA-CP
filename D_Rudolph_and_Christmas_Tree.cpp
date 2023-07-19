#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int  long long
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
        int n,b,h;
        cin>>n>>b>>h;
        float tot=(n*b*h)/((float)2.0);
        vector<float> pos(n);
        for(int i=0;i<n;i++){
            cin>>pos[i];
        }
        for(int i=0;i<n-1;i++){
            if(pos[i+1]-pos[i]>=h)continue;
            float h1=h-(pos[i+1]-pos[i]);
            float b1=(b*h1)/h;
            tot-=(h1*b1)/((float)2.0);
        }
        cout<<setprecision(8)<<fixed<<tot<<"\n";

    }
    return 0;
}