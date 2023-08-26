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
        int n;
        cin >> n;
        int l = 2, r = 2e10, ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int temp = (mid * (mid - 1)) / 2;
            if (temp <= n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        int curr = ((ans * (ans - 1)) / 2);
        if (curr == n)
            cout << ans << "\n";
        else
            cout << ans + n - (ans * (ans - 1)) / 2 << "\n";
    }
    return 0;
}