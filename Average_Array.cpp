#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    // int i = 1;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        if (n % 2 == 1)
        {
            cout << x;
            n--;
            int i = 1;
            while (n > 0)
            {
                cout << " " << x + i << " " << x - i;
                i++;
                n -= 2;
            }
            cout << "\n";
        }
        else
        {
            int i = 1;
            while (n > 0)
            {
                if (n == 2)
                    cout << x - i << " " << x + i;
                else
                    cout << x - i << " " << x + i << " ";
                i++;
                n -= 2;
            }
            cout << "\n";
        }
    }

    return 0;
}