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
    int n, q;
    cin >> n >> q;

    map<int, int> rx, ry;
    vector<int> r(n, 0), c(n, 0);

    for (int i = 1; i <= n; i++)
    {
        rx[i]++;
        ry[i]++;
    }
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            rx.erase(x);
            ry.erase(y);
            r[x]++;
            c[y]++;
        }
        else if (t == 2)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            r[x]--;
            c[y]--;
            if (r[x] == 0)
                rx[x]++;
            if (c[y] == 0)
                ry[y]++;
        }
        else
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x1--;
            y1--;
            x2--;
            y2--;
            int f1 = 1, f2 = 1;
            if (rx.lower_bound(x1) != rx.end() && (*rx.lower_bound(x1)).first <= x2)
            {
                f1 = 0;
            }
            if (ry.lower_bound(y1) != ry.end() && (*ry.lower_bound(y1)).first <= y2)
            {
                f2 = 0;
            }

            if (f1 || f2)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}