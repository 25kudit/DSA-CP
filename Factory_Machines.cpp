#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{

    int n, t;
    cin >> n >> t;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0, d = 1e18;
    ll low = 0, high = 1e18, ans = 1e18;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll prod = 0;
        for (int i = 0; i < n; i++)
        {
            prod += min(mid / a[i], (ll)1e9);
        }
        if (prod >= t)
        {
            high = mid - 1;
            if (mid < ans)
                ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans;

    return 0;
}