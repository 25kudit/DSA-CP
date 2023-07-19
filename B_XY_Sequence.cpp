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
        ll n, b, x, y, curr = 0, sum = 0;
        cin >> n >> b >> x >> y;
        for (int i = 1; i <= n; i++)
        {
            if (curr + x > b)
            {
                curr -= y;
            }
            else
            {
                curr += x;
            }
            sum += curr;
        }
        cout << sum << "\n";
    }

    return 0;
}