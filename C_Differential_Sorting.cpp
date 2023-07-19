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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (a[n - 2] > a[n - 1])
        {
            cout << -1 << "\n";
            continue;
        }
        int f = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        if (f && a[n - 1] < 0)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << n - 2 << "\n";
        for (int i = 1; i <= n - 2; i++)
        {
            cout << i << " " << n - 1 << " " << n << "\n";
        }
    }
    return 0;
}