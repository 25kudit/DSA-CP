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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first + a.second == b.first + b.second)
    {
        return a.second < b.second;
    }
    return (a.first + a.second < b.first + b.second);
}

bool cmp2(pair<int, int> &a, pair<int, int> &b)
{
    return a.first < b.first;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a[i] = {i, t};
        }
        sort(a.begin(), a.end(), cmp);
        sort(a.begin(), a.end() - k, cmp2);
        int ans = 0, lasti = -1, skipped = 0;
        for (int i = 0; i < n - k; i++)
        {
            if (a[i].first != lasti + 1)
            {
                skipped += (a[i].first - lasti - 1);
            }
            ans += (a[i].second + skipped);
            lasti = a[i].first;
        }
        cout << ans << "\n";
    }
    return 0;
}