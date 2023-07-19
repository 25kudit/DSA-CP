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
        int n, q, L, R;
        cin >> n >> q;
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cin >> L >> R;
        vector<int> pres(n + 1, 0), prex(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pres[i] = pres[i - 1] + a[i];
            prex[i] = prex[i - 1] ^ a[i];
        }
        int st=0, en=n, l, r = 1;
        int curr = (pres[n]) - (prex[n]);
        for (l = 1; l <= n; l++)
        {
            if (r < l)
                r = l;
            while ((pres[r] - pres[l - 1]) - (prex[r] ^ prex[l - 1]) < curr && r <= n)
                r++;
            if (r > n)
                break;
            if (r - l < en - st)
            {
                st = l;
                en = r;
            }
        }
        cout << st << " " << en << "\n";
    }
    return 0;
}