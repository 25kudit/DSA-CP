#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
        }
        ll ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += abs(a[i] - a[i - 1]);
        }
        ans += min(2 * (mini - 1), min(a[0], a[n - 1]) - 1);
        if (x > maxi)
            ans += min(2 * (x - maxi), x - max(a[0], a[n - 1]));
        cout << ans << "\n";
    }

    return 0;
}