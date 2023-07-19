#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

ll mod(ll a,ll b){
    return (((a%b) +b)%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        ll max1 = INT_MIN, max2 = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            max1 = max(max1, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max2 && a[i] != max1)
                max2 = a[i];
        }
        ll s1=2*max1;
        ll s2=max1 + max2 + max(mod(max2-max1,m),mod(max1-max2,m));
        cout<<max(s1,s2)<<"\n";
    }

    return 0;
}