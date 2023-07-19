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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        if (n % 2)
        {
            int ans = 0;
            for (int i = 2; i < n; i += 2)
            {
                ans += (max(max(a[i - 1], a[i + 1]) - a[i] + 1, (int)0));
            }
            cout << ans << "\n";
        }
        else
        {
            // cout<<"abhi bna raha\n";
            // int even=0,odd=0;
            int c = 1, ans = __LONG_LONG_MAX__;
            vector<int> even(n / 2, 0), odd(n / 2, 0);
            for (int i = 2; i < n - 1; i += 2)
            {
                even[c] = even[c - 1] + (max(max(a[i - 1], a[i + 1]) - a[i] + 1, (int)0));
                // cout << c << "&" << even[c] << " ";
                c++;
            }
            // even[n/2]=even[n/2-1];
            // cout << "%\n";
            c = 1;
            for (int i = 3; i < n; i += 2)
            {
                odd[c] = odd[c - 1] + (max(max(a[i - 1], a[i + 1]) - a[i] + 1, (int)0));
                // cout << c << "&" << odd[c] << " ";
                c++;
            }
            // odd[n/2]=odd[n/2-1];
            for (int i = 0; i < n / 2; i++)
            {
                ans = min(ans, even[i] + odd[n / 2 -1] - odd[i]);
            }
            cout << ans << "\n";
        }
    }
    return 0;
}