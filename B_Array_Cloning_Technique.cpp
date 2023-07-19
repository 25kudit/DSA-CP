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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int ma = 0;
        for (int i = 0; i < n;)
        {
            int j = i;
            while (a[i] == a[j] && i < n)
                i++;
            ma = max(ma, i - j);
        }
        int ans = 0;
        while (ma < n)
        {
            if (2 * ma > n)
            {
                ans++;
                ans += (n - ma);
                ma = n;
            }
            else{
                ans++;
                ans+=ma;
                ma=2*ma;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}