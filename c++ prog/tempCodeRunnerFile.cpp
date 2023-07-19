#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 998244353
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;
        int a[r - l + 1];
        for (int i = 0; i < (r - l + 1); i++)
            cin >> a[i];
        cout<<a[0]<<"\n";
    }
    return 0;
}