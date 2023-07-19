#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.second < b.second;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, r;
        cin >> n >> r;
        ll cost[n];
        for (int i = 0; i < n; i++)
            cin >> cost[i];
        ll cashb[n];
        for (int i = 0; i < n; i++)
            cin >> cashb[i];
        vector<pair<ll, ll>> weight(n);
        for (int i = 0; i < n; i++)
        {
            weight[i] = {cost[i], cost[i] - cashb[i]};
        }

        ll ans = 0;
        sort(weight.begin(), weight.end(), cmp);
        for (int i = 0; i < n;i++)
        {
            ll no;
            while (weight[i].first <= r)
            {
                no=(r/weight[i].first);
                ans += no;
                r = (r%weight[i].first);
                r+= (no*(weight[i].first-weight[i].second));
                
            }
            
        }
        cout << ans << "\n";
    }

    return 0;
}