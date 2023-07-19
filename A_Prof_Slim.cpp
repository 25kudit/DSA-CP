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
        int nm = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                nm++;
        }
        for (int i = 0; i < n; i++)
        {
            if (nm != 0)
            {
                a[i] = abs(a[i]) * -1;
                nm--;
            }
            else
                a[i] = abs(a[i]);
            // cout << a[i] << "^";
        }
        int f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                f = 1;
                break;
            }
        }
        f ? cout << "NO\n" : cout << "YES\n";
    }

    return 0;
}