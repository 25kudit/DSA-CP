#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 3)
            cout << -1 << "\n";
        else if (n >= 5 && n % 2 == 1)
        {
            cout << 4 << " " << 5 << " " << 1 << " " << 3 << " " << 2;
            int it = n - 5;
            while (it > 0)
            {
                cout << " " << n;
                n--;
                it--;
            }

            cout << "\n";
        }
        else
        {
            while (n > 0)
            {
                if (n != 1)
                    cout << n << " ";
                else
                    cout << n;
                n--;
            }
            cout << "\n";
        }
    }

    return 0;
}