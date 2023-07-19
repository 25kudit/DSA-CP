#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) cout << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ll a[n];
        a[0] = 1;
        int f = 0;
        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] * 3;
            if (a[i] > 1000000000)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}