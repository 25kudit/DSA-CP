#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
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
        string s, t;
        cin >> s >> t;
        if (n == 1)
        {
            if (s[0] == t[0])
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }
        // int f=0;
        for (int i = 0; i < n; i++)
        {
            // if(s[i]==t[i]) i++;
            if (s[i] != t[i])
            {
                if (s[i] == 'a' && t[i] == 'b')
                {
                    int it = i;
                    while (s[it] == 'a')
                        it++;
                    if (it < n)
                        swap(s[i], s[it]);
                }
                else if (s[i] == 'b' && t[i] == 'c')
                {
                    int it = i;
                    while (s[it] == 'b')
                        it++;
                    if (it < n)
                        swap(s[i], s[it]);
                }
            }
            // {
            //     if (i < n - 1)
            //     {
            //         swap(s[i], s[i + 1]);
            //     }
            //     else
            //     {
            //         swap(s[i], s[i - 1]);
            //     }
            // }
        }
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                f = 1;
                break;
            }
        }
        cout << (f ? "NO\n" : "YES\n");
    }
    return 0;
}