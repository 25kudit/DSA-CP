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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cs = 0, sum = 0, ind = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
    cs = sum;
    for (int i = 0; i <= n - k; i++)
    {
        if (cs < sum)
        {
            sum = cs;
            ind = i;
        }
        cs = (cs + a[i + k] - a[i]);
    }
    cout << ind + 1 << "\n";

    return 0;
}