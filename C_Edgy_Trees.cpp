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
#define mod (int)1e9 + 7

int binpow(int base, int pow, int m)
{
    int ans = 1;
    while (pow > 0)
    {
        if (pow & 1)
            (ans *= base) %= m;
        (base *= base) %= m;
        pow >>= 1;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int ans = binpow(n, k, mod);
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (!c)
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
        int sz = 0;
        vector<bool> visited(n + 1, 0);
        function<void(int)> dfs = [&](int src)
        {
            sz++;
            visited[src] = 1;
            for (auto it : adj[src])
                if (visited[it] == 0)
                    dfs(it);
        };
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                sz = 0;
                dfs(i);
                ans -= binpow(sz, k, mod);
                ans += mod;
                ans %= mod;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}