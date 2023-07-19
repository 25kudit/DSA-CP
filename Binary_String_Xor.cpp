#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll check(ll x, string s, ll n, ll k)
{
    int n0 = 0, n1 = 0, j = 0, i;
    if (x == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                n0++;
            else
                n1++;
            if (n1 % 2 == 0 && (n1 > 0 || n0 > 0) && j != k - 1)
            {
                j++;
                n0 = n1 = 0;
            }
        }
        if (n1 % 2 == 0 && (n1 > 0 || n0 > 0) && j == k - 1)
        {
            j++;
        }
    }
    else if (x == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                n0++;
            else
                n1++;
            if (n1 % 2 == 1 && j != k - 1)
            {
                j++;
                n0 = n1 = 0;
            }
        }
        if (n1 % 2 == 1 && j == k - 1)
        {
            j++;
        }
    }
    if (j == k)
        return 1;
    else
        return 0;
}

int main()
{
    int T;
    cin >> T;
    int i = 1;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (check(0, s, n, k) || check(1, s, n, k))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}