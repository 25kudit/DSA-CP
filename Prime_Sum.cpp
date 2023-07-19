#include <bits/stdc++.h>
using namespace std;
typedef long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
        {
            cout << -1 << "\n";
            continue;
        }
        if (__gcd(a, b)==1)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}