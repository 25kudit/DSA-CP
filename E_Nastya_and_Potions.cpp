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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v[x - 1] = 0;
        }
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            while (x--)
            {
                int y;
                cin >> y;
                mp[i].push_back(y - 1);
            }
        }
        vector<int> cost(n, -1);

        function<int(int)> mnc = [&](int x)
        {
            if (cost[x] != -1)
                return cost[x];
            if (mp.find(x) != mp.end())
            {
                int sum = 0;
                for (auto it : mp[x])
                {
                    sum += mnc(it);
                }
                return cost[x] = min(v[x], sum);
            }
            return cost[x] = v[x];
        };

        for (int i = 0; i < n; i++)
        {
            cout << mnc(i) << " ";
        }
        cout << "\n";
    }
    return 0;
}
