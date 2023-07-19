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
    ll cur_max = 0, ans_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cur_max += a[i];
        ans_max = max(ans_max, cur_max);
        cur_max = cur_max > 0 ? cur_max : 0;
    }
    cout << ans_max;

    return 0;
}