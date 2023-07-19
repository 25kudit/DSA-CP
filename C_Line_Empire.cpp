#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll pos[n + 1];
        for (ll i = 1; i <= n ; i++)
            cin >> pos[i];
        ll cost;
        cost = (b * (pos[1]));
        ll capt = 0;
        for (ll i = 2; i <= n; i++)
        {
            if (b * (n - i + 1) >= a)
            {
                cost += (a * (pos[i - 1] - capt));
                capt = pos[i - 1];
            }
            cost += (b * (pos[i] - capt));
        }

        cout << cost << "\n";
    }

    return 0;
}