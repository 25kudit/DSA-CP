#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n, m;
    cin >> n >> m;

    int ar[n + 1], x[n + 1];
    ar[0] = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        x[i] = t;
        ar[t] = i;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int temp = ar[x[a]];
        ar[x[a]] = ar[x[b]];
        ar[x[b]] = temp;
        int cnt = 1;

        for (int i = 1; i <= n; i++)
        {
            if (ar[i - 1] > ar[i])
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}