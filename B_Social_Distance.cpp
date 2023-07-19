#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (n > m)
        {
            cout << "NO\n";
            continue;
        }
        ll it;
        {
            it = 0;
            for (int i = 1; i < n; i++)
            {

                it += max(a[i], a[i - 1]);
                // watch(it);
            }
            it += max(a[n - 1], a[0]);
            it += n;
        }
        watch(it);
        if (it <= m)
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