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
        string s;
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                if ((k - (n - 1 - i)) >= 0)
                {
                    swap(s[i], s[n-1]);
                    k -= (n - 1 - i);
                }
                break;
            }
        }
        int val = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == '1' && s[j + 1] == '1')
                val += 11;
            if (s[j] == '1' && s[j + 1] == '0')
                val += 10;
            if (s[j] == '0' && s[j + 1] == '1')
                val += 1;
        }
        int val1 = val;
        val = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (k - i >= 0)
                {
                    swap(s[i], s[0]);
                    k -= i;
                }
                break;
            }
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == '1' && s[j + 1] == '1')
                val += 11;
            if (s[j] == '1' && s[j + 1] == '0')
                val += 10;
            if (s[j] == '0' && s[j + 1] == '1')
                val += 1;
        }
        cout << min(val, val1) << "\n";
    }
    return 0;
}