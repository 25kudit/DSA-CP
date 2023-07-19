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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> diff;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
                diff.push_back({(a[i - 1] - a[i]), i + 1});
        }
        if (diff.size() == 0)
        {
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << "\n";
            continue;
        }
        sort(diff.begin(), diff.end());

        vector<int> ans(n, 1);
        int cnt = n - 1, i = diff.size() - 1;

        for (; i >= 0; i--)
        {
            ans[cnt] = diff[i].second;
            cnt--;
        }

        for (auto it : ans)
            cout << it << " ";
        cout << "\n";
    }
    return 0;
}