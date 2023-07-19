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
        int n, a1, b1, a2, b2;
        cin >> n >> a1 >> b1 >> a2 >> b2;
        int n1 = min({(a1 - 1), n-a1, (b1 - 1), n-b1});
        int n2 = min({(a2 - 1), n-a2, (b2 - 1), n-b2});
        cout<<abs(n1-n2)<<"\n";
    }
    return 0;
}