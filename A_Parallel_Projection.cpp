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
        int l,w,h;
        cin>>l>>w>>h;
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        int t1,t2;
        t1= min(b+q+abs(a-p),w-b+w-q+abs(a-p));
        t2= min(a+p+abs(b-q),l-a+l-p+abs(b-q));
        cout<<min(t1,t2)+h<<"\n";

    }
    return 0;
}