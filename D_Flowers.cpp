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
#define mod 1000000007

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
    int T = 1, k;
    cin >> T >> k;
    vector<int> dp(100009, 0);
    dp[0] = 1;
    for (int i = 1; i <= 100009; i++)
    {
        if (i - k >= 0)
            dp[i] = (dp[i] + dp[i - 1] + dp[i - k]) %mod;
        else
            dp[i] = (dp[i] + dp[i - 1]) %mod;

    }
    for(int i=1;i<=100009;i++)dp[i]=(dp[i]+dp[i-1]);

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        cout << (dp[b]-((a==0)?0:dp[a-1]))%mod << "\n";
    }
    return 0;
}