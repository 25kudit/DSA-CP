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
        int n,m;
        cin >> n >> m;
        vector<int> v(n);
        map<int, vector<int>> al;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = INT_MAX;
        int gp=m;
        while(gp--)
        {
            int x, y;
            cin >> x >> y;
            al[x].push_back(y);
            al[y].push_back(x);
            ans = min(ans, v[x - 1] + v[y - 1]);
        }
        if (m % 2 == 0)
        {
            cout << 0<<"\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            if (al[i].size() % 2 == 1)
                ans = min(ans, v[i - 1]);
        }
        cout << ans<<"\n";
    }
    return 0;
}