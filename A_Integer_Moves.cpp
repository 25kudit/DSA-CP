#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    int i = 1;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << 0 << "\n";
        else if (a == 0 || b == 0)
            cout << 1 << "\n";
        else if (((int)sqrt(a * a + b * b) * (int)sqrt(a * a + b * b)) == (a * a + b * b))
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }

    return 0;
}