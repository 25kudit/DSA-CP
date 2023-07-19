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
    int n;
    cin >> n;
    int n1 = 0, n2 = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 100)
            n1++;
        else
            n2++;
    }
    n2 *= 2;
    if ((n1 + n2) % 2 == 0)
    {
        if (n1 == 0 && n2 % 4 != 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}