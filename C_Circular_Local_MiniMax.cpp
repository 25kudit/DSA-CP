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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> ans(n);
        int it = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans[i] = a[it];
            it++;
        }
        for (int i = 1; i < n; i += 2)
        {
            ans[i] = a[it];
            it++;
        }
        // for (int i = 0; i < n; i++)
        //     cout << ans[i] << " ";
        // cout << "\n";
        int f = 1;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (!((ans[i] > ans[i + 1] && ans[i] > ans[n - 1]) || (ans[i] < ans[i + 1] && ans[i] < ans[n - 1])))
                {
                    f = 0;
                    break;
                }
            }
            else if (i == n - 1)
            {
                if (!((ans[i] > ans[0] && ans[i] > ans[i - 1]) || (ans[i] < ans[0] && ans[i] < ans[i - 1])))
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                if (!((ans[i] > ans[i + 1] && ans[i] > ans[i - 1]) || (ans[i] < ans[i + 1] && ans[i] < ans[i - 1])))
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f == 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}