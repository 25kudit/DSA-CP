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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int l = -1, r = -1, mx = -1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > mx)
            {
                r = i - 1;
                mx = v[i];
            }
        }
        vector<int> vmax(n, -1);
        for (int l = 0; l <= r; l++)
        {
            vector<int> vtemp;
            for (int i = r + 1; i < n; i++)
            {
                vtemp.push_back(v[i]);
            }
            for (int i = r; i >= l; i--)
            {
                vtemp.push_back(v[i]);
            }
            for (int i = 0; i < l; i++)
            {
                vtemp.push_back(v[i]);
            }
            if (vtemp > vmax)
                vmax = vtemp;
        }
        if (r == n - 2)
        {
            vector<int> vtemp;
            vtemp.push_back(v[n - 1]);
            for (int i = 0; i < n - 1; i++)
                vtemp.push_back(v[i]);
            if (vtemp > vmax)
                vmax = vtemp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << vmax[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}