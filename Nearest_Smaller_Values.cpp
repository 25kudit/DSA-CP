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
    int a[n];
    stack<pair<int, int>> nos;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        while (nos.size() > 0 && a[i] <= nos.top().first)
            nos.pop();
        if (nos.size() > 0)
            cout << nos.top().second;
        else
            cout << 0;
        cout<<" ";
        nos.push({a[i], i + 1});
    }

    return 0;
}