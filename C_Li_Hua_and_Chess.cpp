#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m, d, p, q;
        cin >> n >> m;
        cout << "? " << 1 << " " << 1 << endl;
        cin >> d;
        p = q = INT_MAX;
        if (d < m)
        {
            cout << "? " << 1 << " " << d + 1 << endl;
            cin >> p;
        }
        if (d < n)
        {
            cout << "? " << d + 1 << " " << 1 << endl;
            cin >> q;
        }
        cout << "! " << min(d, p) + 1 << " " << min(d, q) + 1 << endl;
    }
    return 0;
}