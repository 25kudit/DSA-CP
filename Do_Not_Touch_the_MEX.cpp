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
        int a[n], zi = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                zi = i;
        }
        if (zi == 0 || zi == n - 1)
        {
            cout << 0 << "\n";
            continue;
        }
        sort(a, a + zi);
        sort(a + zi + 2, a + n);

        // for (int i = 0; i < n; i++)cout<<a[i];
        int mexl = 0, mexr = 0;
        for (int i = 0; i < zi; i++)
        {
            if (a[i] != i + 1)
                mexl = i + 1;
        }
        for (int i = zi + 1; i < n; i++)
        {
            if (a[i] != i - zi - 1)
                mexr = a[i];
        }
        cout<<mexl<<"&"<<mexr<<"\n";
        int cnt = 0;
        for (int i = 0, j = zi + 1; i < zi && j < zi + 1;)
        {
            if (abs(a[i] - a[j]) == 1)
            {
                if (a[j] != mexl && a[i] != mexr)
                    cnt++;
                i++;
                j++;
            }
            else if (a[i] < a[j])
                i++;
            else if (a[i] > a[j])
                j++;
        }
        cout<<cnt<<"\n";

        return 0;
    }
}