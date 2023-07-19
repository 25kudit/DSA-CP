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

int binpow(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans + m) % m;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string a, b;
        cin >> a >> b;
        vector<int> diff;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                diff.push_back(i);
        }
        if (diff.size() % 2)
        {
            cout << -1 << "\n";
            continue;
        }
        sort(diff.begin(), diff.end());
        int cost1 = 0, cost2 = 0;
        int sz = diff.size();

        cost1 += sz / 2 * y;
        if (sz == 2 && (diff[0] + 1 == diff[1]))
            cost1 += y;

        int cnt = 0;
        for (int i = 0; i < sz - 1;)
        {
            if (diff[i] + 1 == diff[i + 1])
            {
                cnt += 1;
                i += 2;
            }
            else
                i++;
        }
        cost2 += (cnt * x) + (sz - 2 * cnt) / 2 * y;

        cout << min(cost1, cost2) << "\n";
    }
    return 0;
}