#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int st = -1, en = 0, cnt = 0, f2 = 0;
        vector<int> red(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (st == -1)
                    continue;
                en = i - 1;
                cnt++;
                if (f2)
                {
                    if (st > 0)
                        red[st - 1] = 1;
                    red[en + 1] = 1;
                }
                else
                {
                    if (st > 0 && red[st - 1] == 0)
                        red[st - 1] = 1;
                    else
                        red[en + 1] = 1;
                }
                f2 = 0;
                st = -1;
            }
            else
            {
                if (a[i] == 2)
                    f2 = 1;
                if (st == -1)
                    st = i;
                red[i] = 1;
            }
            
        }

        if (st != -1)
        {
            cnt++;
            if (f2)
            {
                if (st > 0)
                    red[st - 1] = 1;
            }
            else
            {
                if (st > 0 && red[st - 1] == 0)
                    red[st - 1] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (red[i] == 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}