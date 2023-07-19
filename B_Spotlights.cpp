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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                dp[i][j] = 0;
                f = 1;
            }
            else
            {
                dp[i][j] += f;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        int f = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == 1)
            {
                dp[j][i] = 0;
                f = 1;
            }
            else
            {
                dp[j][i] += f;
            }
        }
    }
    
    for (int i = 0; i <n; i++)
    {
        int f = 0;
        for (int j = m-1; j >=0; j--)
        {
            if (a[i][j] == 1)
            {
                dp[i][j] = 0;
                f = 1;
            }
            else
            {
                dp[i][j] += f;
            }
        }
    }
    for (int i = 0; i<m; i++)
    {
        int f = 0;
        for (int j = n-1; j >=0; j--)
        {
            if (a[j][i] == 1)
            {
                dp[j][i] = 0;
                f = 1;
            }
            else
            {
                dp[j][i] += f;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            ans+=dp[i][j];
    }
    cout << ans;
    return 0;
}