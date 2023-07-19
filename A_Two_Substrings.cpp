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
    // cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int f = 0, ans = 0;
        for (int i = 0; i < n - 1;)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                f = 1;
                i += 2;
            }

            if (f == 1 && s[i] == 'B' && s[i + 1] == 'A')
            {
                ans = 1;
                break;
            }
            i++;
        }
        f = 0;
        for (int i = 0; i < n - 1;)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                f = 1;
                i += 2;
            }

            if (f == 1 && s[i] == 'A' && s[i + 1] == 'B')
            {
                ans = 1;
                break;
            }
            i++;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}