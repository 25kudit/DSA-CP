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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a<b)&&(a<c)&&(c<d)&&(b<d)||
        (c<a) && (c<d) && (a<b)&&(d<b)||
        (d<c)&&(d<b)&&(c<a)&&(b<a)||
        (b<d)&&(b<a)&&(a<c)&&(d<c))
            cout<<"YES\n";
        else    cout<<"NO\n";
        

    }
    return 0;
}