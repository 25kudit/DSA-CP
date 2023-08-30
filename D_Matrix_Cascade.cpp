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
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<string> m(n);
        for (int i = 0; i < n; i++)
            cin >> m[i];
        vector<vector<int>> calcl(n + 1, vector<int>(n + 1, 0)), calcr(n + 1, vector<int>(n + 1, 0)), l(n + 1, vector<int>(n + 1, 0)), r(n + 1, vector<int>(n + 1, 0));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp(n);
            temp[0] = calcl[i][0] - calcr[i][0];
            for (int j = 1; j < n; j++)
                temp[j] = temp[j - 1] + calcl[i][j] - calcr[i][j];
            for (int j = 0; j < n; j++)
            {
                int k = temp[j] + (m[i][j] == '1');
                if (k % 2)
                {
                    cnt++;
                    if (i+1 < n)
                    {
                        calcl[i + 1][max(0ll, j - 1)] += 1;
                        calcr[i + 1][min(n, j + 2)] -= 1;
                        l[i + 1][max(0ll, j - 1)] = 1;
                        r[i + 1][min(n, j + 1)] = 1;
                    }
                }
                if (l[i][j] && i+1<n)
                {
                    l[i + 1][max(0ll, j - 1)] = 1;
                    calcl[i + 1][max(0ll, j - 1)] += (calcl[i][j]-calcr[i][j]);
                }
                if (r[i][j] && i+1<n)
                {
                    r[i + 1][min(n, j + 1)] = 1;
                    calcr[i + 1][min(n, j + 2)] -= (calcl[i][j]-calcr[i][j]);
                }
                
            }
            
        }
        cout << cnt << "\n";
    }
    return 0;
}

