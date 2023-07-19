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
int w, h, n;

bool isgood(int x)
{
    return (x / w) * (x / h) >= n;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> w >> h >> n;
    int l = 0, r = 2;
    while(!isgood(r))r*=2;
    while (l < r - 1)
    {
        int m = (l + r) / 2;
        if (isgood(m))
            r = m;
        else
            l = m;
    }
    cout << r << "\n";
    return 0;
}