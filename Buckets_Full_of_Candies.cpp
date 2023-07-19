#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m, l;
        cin >> n >> m >> l;
        ll i = n;
        while (i >= 1)
        {
            m=m%(l+i-1);
            i=m-l+1;
        }
        cout << m << "\n";
    }

    return 0;
}