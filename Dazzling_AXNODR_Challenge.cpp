#include <bits/stdc++.h>
using namespace std;
typedef long int ll;

int main()
{
    int T;
    cin >> T;
    int i = 1;
    while (T--)
    {
        ll n;
        cin >> n;
        if (n % 4 == 0)
            cout << (n | 3) << "\n";
        else if (n % 4 == 1)
            cout << n << "\n";
        else if (n % 4 == 2 || n % 4 == 3)
            cout << 3 << "\n";
    }

    return 0;
}