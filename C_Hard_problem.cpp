#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
#define inf 1e18

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> cost(n);
        for (int i = 0; i < n; i++)
            cin >> cost[i];
        vector<string> str(n);
        for (int i = 0; i < n; i++)
            cin >> str[i];
        vector<pair<int, int>> dp(n, {inf,inf});
        dp[0].first = 0;
        dp[0].second = cost[0];
        for (int i = 1; i < n; i++)
        {
            string curr = str[i], prev = str[i - 1];
            reverse(curr.begin(), curr.end());
            reverse(prev.begin(), prev.end());
            if (str[i] >= str[i - 1])
                dp[i].first = min(dp[i].first, dp[i - 1].first);

            if (str[i] >= prev)
                dp[i].first = min(dp[i].first, dp[i - 1].second);

            if (curr >= str[i - 1])
                dp[i].second = min(dp[i].second, dp[i - 1].first + cost[i]);

            if (curr >= prev)
                dp[i].second = min(dp[i].second, dp[i - 1].second + cost[i]);
        }
        if(min(dp[n-1].first,dp[n-1].second)==inf)cout<<-1<<"\n";
        else cout<<min(dp[n-1].first,dp[n-1].second)<<"\n";
    }
    return 0;
}