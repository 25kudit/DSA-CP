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
        vector<int> a(n),t(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            t[i]=a[i];
        }

        // if (a[n - 2] > a[n - 1])
        {
            int mn = max(a[0], a[n - 1]);
            for (int i = n - 1; i > 0; i--)
            {
                int d = a[i] - mn;
                a[i] = a[i] - d;
                a[i - 1] = a[i - 1] - d;
                // for (auto it : a)
                //     cout << it << " ";
                // cout << "\n";
            }
            if (a[0] <= a[1]){
                cout << "YES\n";
                continue;
            }
            
        }
        // else
        {
            int mn = min(t[0], t[n - 1]);
            for (int i = 0; i < n - 1; i++)
            {
                int d = t[i] - mn;
                t[i] = t[i] - d;
                t[i + 1] = t[i + 1] - d;
                // for (auto it : a)
                //     cout << it << " ";
                // cout << "\n";
            }
            if (t[n - 2] > t[n - 1])
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}