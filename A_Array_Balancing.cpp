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
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                int t = a[i];
                a[i] = b[i];
                b[i] = t;
            }
        }
        ll suma = 0, sumb = 0;
        for (int i = 0; i < n - 1; i++)
        {
            suma += abs(a[i] - a[i + 1]);
            sumb += abs(b[i] - b[i + 1]);
        }
        cout << suma + sumb << "\n";
    }

    return 0;
}