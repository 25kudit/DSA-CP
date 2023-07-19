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
    ll n, q;
    cin >> n >> q;
    ll a[n];
    vector<ll> chg;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // chg.push_back(i+1);
        sum += a[i];
    }
    ll te2 = 0, lastval = 0;
    while (q--)
    {
        ll t, ind, val;
        cin >> t;
        if (t == 1)
        {
            cin >> ind;
            cin >> val;
            if (te2 == 1)
            {
                if (find(chg.begin(), chg.end(), ind) != chg.end())
                {
                    sum = (sum - a[ind - 1] + val);
                    a[ind - 1] = val;
                }
                else
                {
                    sum = (sum - lastval + val);
                    a[ind - 1] = val;
                    chg.push_back(ind);
                }
            }
            else {
                sum=(sum-a[ind-1]+val);
                a[ind-1]=val;
            }
        }
        else
        {
            cin >> val;
            sum = (n * val);
            chg.clear();
            te2 = 1;
            lastval = val;
        }
        cout << sum << "\n";
    }
    return 0;
}