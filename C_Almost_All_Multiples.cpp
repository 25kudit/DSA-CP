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
        int n, x;
        cin >> n >> x;
        if (n % x != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> a(n + 1, -1);
        a[1] = x;
        a[n] = 1;

        while (n % x == 0 && x < n)
        {
            for (int i = 2; x * i <= n; i++)
            {
                if (n % (x * i) == 0)
                {
                    a[x] = x * i;
                    x *= i;
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == -1)
                cout << i;
            else
                cout << a[i];
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}