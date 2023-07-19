#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    {
        int n, m, q;
        cin >> n >> m >> q;
        char desk[n * m + 1];

        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                if (c == '*')
                    cnt++;
                desk[j * n + i] = c;
            }
        }
        ll ans = 0;
        for (ll i = cnt; i < n * m; i++)
        {
            if (desk[i] == '*')
                ans++;
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            a = (b * n) + a;
            if (desk[a] == '.')
            {
                desk[a] = '*';
                if (a > cnt )
                {
                    ans++;
                }
                if (desk[cnt] == '*')
                {
                    ans--;
                }
                cnt++;
            }
            else
            {
                desk[a] = '.';
                if (a < cnt )
                {
                    ans++;
                }
                if (a > cnt)
                {
                    ans--;
                }
                cnt--;
            }
            cout << ans << "\n";
        }
    }

    return 0;
}