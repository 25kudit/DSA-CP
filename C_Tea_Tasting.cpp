#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> amt(n), cap(n);
        for (int i = 0; i < n; i++)
            cin >> amt[i];
        for (int i = 0; i < n; i++)
            cin >> cap[i];
        vector<int> res(n, 0);
        multiset<int> mt;
        int t = 0;

        for (int i = 0; i < n; i++)
        {
            mt.insert(amt[i] + t);
            while (mt.size() > 0 && *mt.begin() <= cap[i] + t)
            {
                res[i] += *mt.begin() - t;
                mt.erase(mt.begin());
            }
            res[i] += mt.size() * cap[i];
            if (mt.size() == 0)
                t = 0;
            else
                t += cap[i];
        }
        for(auto it:res)cout<<it<<" ";
        cout<<"\n";
    }
    return 0;
}
