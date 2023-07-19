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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll t;
            cin >> t;
            mp[t]++;
        }
        vector<ll> a;
        for (auto it : mp)
        {
            if (it.second >= k)
                a.push_back(it.first);
        }
        if (a.size() == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        // sort(a.begin(), a.end());
        ll l = a[0], r = a[0], li = 0, ri = 1, len = 0;
        ll j = 1;
        while (j < a.size())
        {
            if (a[j - 1] + 1 == a[j])
            {
                if (len < ri - li + 1)
                {
                    len = ri - li + 1;
                    l = a[li];
                    r = a[ri];
                }
                ri++;
                
            }
            else
            {
                li = j;
                ri = j + 1;
            }
            j++;
        }

        cout << l << " " << r << "\n";
    }

    return 0;
}