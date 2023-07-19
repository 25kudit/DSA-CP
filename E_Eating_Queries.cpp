#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) <<endl

ll binsearch(int x, vector<ll> &a)
{
    ll st = 0, en = a.size() - 1,mid;
    while (st <= en)
    {
        mid = st+(en-st)/2;
        if (a[mid] == x)
            return mid+1;
        if (x > a[mid])
            st = mid + 1;
        else
            en = mid - 1;
    }
    return st+1;
}
bool cmp(ll &a, ll &b)
{
    return a > b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), cmp);
        // set<ll> s;
        // s.insert(a[0]);
        for (int i = 1; i < n; i++)
            a[i] += a[i - 1];
        while (q--)
        {
            ll x;
            cin >> x;
            watch(x);
            if (x <= a[0])
                cout << 1 << "\n";
            else if (a[n - 1] < x)
                cout << -1 << "\n";
            else
            {

                cout << binsearch(x, a) << "\n";
            }
        }
    }

    return 0;
}