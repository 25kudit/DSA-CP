#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((b - a) == 1)
        {
            cout << -1 << "\n";
            continue;
        }

        if (a % 2 == 1)
        {
            if ((b - a) == 2)
                cout << -1 << "\n";
            else if (a % 3 == 0)
                cout << a << " " << a + 3 << "\n";
            else
                cout << a + 1 << " " << a + 3 << "\n";
        }

        if ((b - a) >= 2 && a % 2 == 0)
            cout << a << " " << a + 2 << "\n";
    }
    return 0;
}