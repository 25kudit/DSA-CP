#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll x;
        cin >> x;

        if (x % 2 == 1)
        {
            cout << -1 << "\n";
        }
        else
        {
            if ((x & (x - 1)) != 0)
            {
                cout << 0 << " ";
                ll b = pow(2, ((ll)log2(x / 2))) + 1e-9;
                cout << b << " " << (ll)(x / 2) - b << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}