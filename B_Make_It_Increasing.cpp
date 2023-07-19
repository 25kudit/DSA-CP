#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        if (a[n - 1] < n - 1)
        {
            cout << -1 << "\n";
            continue;
        }
        int f = 0;
        for (int i = n - 1; i > 0; i--)
        {
            while (a[i] <= a[i - 1])
            {
                a[i - 1] /= 2;
                ans++;
                if (a[i - 1] == 0)
                    break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i - 1] >= a[i])
            {
                f = 1;
                break;
            }
        }
        f ? cout << -1 << "\n" : cout << ans << "\n";
    }

    return 0;
}