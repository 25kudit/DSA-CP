#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact(ll n)
{
    return (n == 1 | n == 0) ? 1 : (n * fact(n - 1));
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ll n1 = 0, n2 = 0, pairs = 0;

        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            if (t == 1)
            {

                pairs += (n - i - 1);
                pairs += (i - n1);
                n1++;
            }
            else if (t == 2)
                n2++;
        }
        pairs += ((ll)n2 * (n2 - 1) / 2);
        cout << pairs << "\n";
    }

    return 0;
}