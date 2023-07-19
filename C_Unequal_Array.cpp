#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int st = -1, end = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                st = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == a[i - 1])
            {
                end = i;
                break;
            }
        }
        int len = end - st + 1;
        if (len == 2 || (st == end && st == -1))
            cout << 0 << "\n";
        else if (len == 3)
            cout << 1 << "\n";
        else
            cout << len - 3 << "\n";
    }

    return 0;
}