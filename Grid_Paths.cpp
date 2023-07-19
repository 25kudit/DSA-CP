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
    int n;
    cin >> n;
    char grid[n][n];
    vector<vector<int>> dp;
    for (int i = 0; i <= n; i++)
    {
        vector<int> temp(n + 1, 0);
        dp.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    if(grid[0][0]!='*')dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (grid[i - 1][j - 1] != '*')
            {
                // if (grid[i - 1][j - 2] != '*')
                    dp[i][j] = (dp[i][j] + dp[i][j - 1]) % 1000000007;
                // if (grid[i - 2][j - 1] != '*')
                    dp[i][j] = (dp[i][j] + dp[i - 1][j]) % 1000000007;
            }
        }
    }
    cout << dp[n][n];

    return 0;
}