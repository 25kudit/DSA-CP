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
            cin >> a[i];
        int lind1, rind1, lind2, rind2;
        unordered_map<int, int> index;
        int ans = 0, f = 0;
        for (int i = 0, j = 0; i < n; i++)
        {

            j = max(index[a[i]], j);

            if (ans <= i - j + 1)
            {
                lind1 = j;
                rind1 = i;
                ans = i - j + 1;
                // cout<<lind<<"&"<<rind<<"\n";
            }

            index[a[i]] = i + 1;
        }
        int res1 = 2 * min(lind1, n - rind1 - 1) + max(lind1, n - rind1 - 1);

        index.clear();
        ans = 0;
        for (int i = 0, j = 0; i < n; i++)
        {

            j = max(index[a[i]], j);

            if (ans < i - j + 1)
            {
                lind2 = j;
                rind2 = i;
                ans = i - j + 1;
                // cout<<lind<<"&"<<rind<<"\n";
            }

            index[a[i]] = i + 1;
        }
        // lind--;
        // rind--;
        // cout<<ans<<"%\n";
        int res2 = 2 * min(lind2, n - rind2 - 1) + max(lind2, n - rind2 - 1);
        cout << min(res1,res2) << "\n";
    }
    return 0;
}