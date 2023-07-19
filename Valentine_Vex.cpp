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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        // ll maxa=INT_MIN;
        // a odd b even

        multiset<ll, greater<ll>> even, odd;
        for (ll i = 0; i < n; i++)
        {
            // watch(a[i]);
            if (a[i] % 2)
                odd.insert(a[i]);
            else
                even.insert(a[i]);
        }
        ll sa1 = 0, sb1 = 0, k = 0;
        while (!even.empty() && !odd.empty())
        {

            sa1 += (k % 2 == 0 ? *odd.begin() : *even.begin());
            sb1 += (k % 2 == 0 ? *even.begin() : *odd.begin());
            odd.erase(odd.begin());
            even.erase(even.begin());
            k++;
        }
        if (!odd.empty())
            if (k % 2 == 0)
                sa1 += *odd.begin();
            else
                sb1 += *odd.begin();
        if (!even.empty())
            if (k % 2 == 0)
                sb1 += *even.begin();
            else
                sa1 += *even.begin();
        if (sa1 < sb1)
        {
            sa1 = -1;
            sb1 = -1;
        }
        // maxa=sa1;
        // cout << "1 " << sa1 << "% " << sb1 << "\n";

        // a even b odd
        even.clear();
        odd.clear();
        k = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2)
                odd.insert(a[i]);
            else
                even.insert(a[i]);
        }
        ll sa2 = 0, sb2 = 0;
        while (!even.empty() && !odd.empty())
        {
            sa2 += (k % 2 == 0 ? *even.begin() : *odd.begin());
            sb2 += (k % 2 == 0 ? *odd.begin() : *even.begin());
            k++;
            odd.erase(odd.begin());
            even.erase(even.begin());
        }
        if (!odd.empty())
            if (k % 2 == 0)
                sb2 += *odd.begin();
            else
                sa2 += *odd.begin();
        if (!even.empty())
            if (k % 2 == 0)
                sa2 += *even.begin();
            else
                sb2 += *even.begin();
        if (sa2 < sb2)
        {
            sa2 = -1;
            sb2 = -1;
        }
        else
        {
            if (sb2 < sb1)
                sa2 = -1;
        }
        

        // cout << "2 " << sa2 << "\n";

        // a even b even
        even.clear();
        odd.clear();
        k = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2)
                odd.insert(a[i]);
            else
                even.insert(a[i]);
        }
        ll sa3 = 0, sb3 = 0;
        while ((k % 2 == 0 && !even.empty()) || (k % 2 == 1 && !odd.empty()))
        {
            sa3 += (k % 2 == 0 ? *even.begin() : *odd.begin());
            k % 2 == 0 ? even.erase(even.begin()) : odd.erase(odd.begin());
            if (k % 2 == 0 && even.empty())
                break;
            if (k % 2 == 1 && odd.empty())
                break;
            sb3 += ((k % 2 == 0 ? *even.begin() : *odd.begin()));
            k % 2 == 0 ? even.erase(even.begin()) : odd.erase(odd.begin());
            k++;
        }
        if (sa3 < sb3)
        {
            sa3 = -1;
            sb3 = -1;
        }
        else
        {
            if (sb3 < max(sb1, sb2))
                sa3 = -1;
        }
        // cout << "3 " << sa3 << "\n";

        // a odd b odd
        even.clear();
        odd.clear();
        k = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2)
                odd.insert(a[i]);
            else
                even.insert(a[i]);
        }
        ll sa4 = 0, sb4 = 0;
        while ((k % 2 == 1 && !even.empty()) || (k % 2 == 0 && !odd.empty()))
        {
            sa4 += (k % 2 == 1 ? *even.begin() : *odd.begin());
            k % 2 == 1 ? even.erase(even.begin()) : odd.erase(odd.begin());
            if (k % 2 == 1 && even.empty())
                break;
            if (k % 2 == 0 && odd.empty())
                break;
            sb4 += ((k % 2 == 1 ? *even.begin() : *odd.begin()));
            k % 2 == 1 ? even.erase(even.begin()) : odd.erase(odd.begin());
            k++;
        }
        if (sa4 < sb4)
        {
            sa4 = -1;
            sb4 = -1;
        }
        else
        {
            if (sb4 < max(sb1, max(sb2, sb3)))
                sa4 = -1;
        }

        // cout << "4 " << sa4 << "\n";

        cout << max(sa1, max(sa2, max(sa3, sa4))) << "\n";
    }

    return 0;
}