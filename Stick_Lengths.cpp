#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll sub = a[n / 2], ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (abs(a[i] - sub));
    }
    cout << ans;

    return 0;
}