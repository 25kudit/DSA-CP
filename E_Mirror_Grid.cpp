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
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin>>a[i];
        n--;
        int ans = 0;
        for (int j = 0; j <= n; j++)
        {
            for (int i = 0; i <= (n - j); i++)
            {
                // cout<<"hi"<<"\n";
                int x = a[n - i - j][j] + a[j][i + j] + a[n - j][n - i - j] + a[i + j][n - j]-4*'0';
                if (x >= 2)
                {
                    ans += (4 - x);
                    a[n - i - j][j] = a[j][i + j] = a[n - j][n - i - j] = a[i + j][n - j] = 1+'0';
                }
                else
                {
                    ans += x;
                    a[n - i - j][j] = a[j][i + j] = a[n - j][n - i - j] = a[i + j][n - j] = 0+'0';
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}