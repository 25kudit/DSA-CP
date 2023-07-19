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
    int n;
    cin >> n;
    int gc, mx = INT_MIN;
    int a1, a2;
    cin >> a1 >> a2;
    gc = __gcd(a1, a2);
    mx = max(a1, a2);
    for (int i = 2; i < n; i++)
    {
        int t;
        cin >> t;
        gc = __gcd(t, gc);
        mx = max(mx, t);
    }
    int op = mx / gc - n;
    if (op % 2)
        cout << "Alice\n";
    else
        cout << "Bob\n";
    return 0;
}