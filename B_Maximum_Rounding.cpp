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
        string s;
        cin >> s;
        int n = s.size();
        int c = 0, it = n - 1;
        vector<int> v(n, 0);
        while (it >= 0)
        {
            if (c)
            {
                if (s[it] >= '9'){
                    it--;
                    continue;
                }
                s[it]++;
                v[it] = 1;
                c = 0;
            }
            if (s[it] >= '5')
            {
                c++;
            }
            it--;
        }

        if (c)
        {
            cout << 1;
            for (int i = 0; i < n; i++)
            {
                cout << 0;
            }
            cout<<"\n";
        }
        else
        {
            int ind = n;
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
                if (v[i] == 1)
                {
                    ind = i;
                    break;
                }
            }
            for (int i = ind + 1; i < n; i++)
            {
                cout << 0;
            }
            cout<<"\n";
        }
    }
    return 0;
}
