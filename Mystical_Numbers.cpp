#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dp[n + 1][33];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < 33; j++)
                dp[i][j] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 33; j++)
            {
                dp[i][j] = dp[i - 1][j];
            }
            int l = 32;
            if (a[i - 1] != 0)
                l = (int)log2(a[i - 1]);
            dp[i][l]++;
        }

        int q;
        cin >> q;
        while (q--)
        {
            int l, r, x;
            cin >> l >> r >> x;
            int les = 32;
            if (x != 0)
                les = (int)log2(x);
            int no = dp[r][les] - dp[l - 1][les];
            cout << r - l - no + 1 << "\n";
        }
    }

    return 0;
}