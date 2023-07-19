#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// #define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> price(n + 1, 0), page(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> price[i];
    for (int i = 1; i <= n; i++)
        cin >> page[i];
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - price[i] >= 0)
            {
                dp[i][j] = max(dp[i][j], page[i] + dp[i - 1][j - price[i]]);
            }
        }
    }
    cout << dp[n][x];
    return 0;
}