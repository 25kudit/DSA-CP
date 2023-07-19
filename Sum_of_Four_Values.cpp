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
    int n, x;
    cin >> n >> x;
    vector<int> val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    map<int, pair<int, int>> sumpair;
    int f = 0;
    sumpair[val[0] + val[1]] = {1, 2};
    for (int i = 2; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sumpair.count(x - val[i] - val[j]))
            {
                cout << i + 1 << " " << j + 1 << " "
                     << sumpair[x - val[i] - val[j]].first << " "
                     << sumpair[x - val[i] - val[j]].second;
                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
        for (int k = 0; k < i; k++)
        {
            sumpair[val[k] + val[i]] = {i+1, k+1};
        }
    }
    if (f == 0)
        cout << "IMPOSSIBLE";

    return 0;
}