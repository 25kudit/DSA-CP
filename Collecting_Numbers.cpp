#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[t] = i + 1;
    }
    int cnt = 1;
    for (int i =2 ; i <= n; i++)
    {
        if (a[i - 1] > a[i])
        {
            cnt++;
        }
    }
    // if (a[n] > a[n - 1])
    //     cout << cnt;
    // else
    cout << cnt;

    return 0;
}