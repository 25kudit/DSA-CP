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
        int n, m;
        cin >> n >> m;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            st.insert(t);
        }
        // int t=0;
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            // cout<<"\n";
            if (c <= 0)
            {
                cout << "NO\n";
                continue;
            }
            int x = 4 * a * c;
            int t = sqrt(4 * a * c);

            if (st.lower_bound(b - t) == st.end())
            {
                cout << "NO\n";
                continue;
            }
            
            // cout<<t<<"&"<<lb<<"\n";
            // non perfect
            if (t * t != x)
            {
                int lb = *st.lower_bound(b - t);
                if (lb >= (b - t) && lb <= (b + t))
                {
                    cout << "YES\n";
                    cout << lb << "\n";
                    // continue;
                }
                else
                    cout << "NO\n";
            }
            else
            {
                int lb = *st.lower_bound(b - t+1);
                if (lb >= (b - t+1) && lb <= (b + t-1))
                {
                    cout << "YES\n";
                    cout << lb << "\n";
                    // continue;
                }
                else
                    cout << "NO\n";
            }

        }
        cout<<"\n";
    }
    return 0;
}