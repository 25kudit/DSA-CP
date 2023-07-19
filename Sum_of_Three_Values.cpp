#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type,less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<int ,int>> val(n);
    for (ll i = 0; i < n; i++){
        ll t;
        cin>>t;
        val[i]={t,i+1};
    }
        
    sort(val.begin(), val.end());
    int f = 0;
    for (ll i = 0; i < n; i++)
    {
        ll m = x - val[i].first;
        ll h = i + 1, k = n - 1;
        while (h < k)
        {
            if (val[h].first + val[k].first == m)
            {
                cout << val[i].second << " " << val[h].second << " " << val[k].second;
                f = 1;
                break;
            }
            else if (val[h].first + val[k].first < m)
                h++;
            else
                k--;
        }
        if (f == 1)
            break;
    }
    if (f == 0)
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}