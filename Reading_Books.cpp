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
    int n;
    cin >> n;
    vector<ll> dur(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> dur[i];
        sum += dur[i];
    }
    sort(dur.begin(), dur.end());
    cout << max(2 * dur[n - 1], sum);

    return 0;
}