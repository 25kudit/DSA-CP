#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, j = n - 1, ansi = -1, ansj = -1, f = 0;
        ll suml = a[i], sumr = a[j];

        while (i < j)
        {
            if (suml == sumr)
            {
                ansi = i;
                ansj = j;
                i++;
                j--;
                f = 1;
                if (i < j)
                {
                    suml += a[i];
                    sumr += a[j];
                }
                else
                    break;
            }
            else if (suml < sumr)
            {
                i++;
                suml += a[i];
                // i++;
            }
            else
            {
                j--;
                sumr += a[j];
                // j--;
            }
        }
        int ans = ansi + 1 + (n - ansj);
        if (f == 1)
            cout << ans << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}