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
        vector<string> a(n);
        unordered_multiset<string> s;
        vector<int> ans(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            // int f = 0;
            s.erase(s.find(a[i]));
            for (int j = 0; j < a[i].size()-1; j++)
            {
                if (s.find(a[i].substr(0, j + 1)) != s.end() && s.find(a[i].substr(j + 1, a[i].size() - j - 1)) != s.end())
                {
                    ans[i]=1;
                    break;
                }
            }
            // if (f == 0)
            //     cout << 0;
            s.insert(a[i]);
        }
        for(int i=0;i<n;i++) cout<<ans[i];
        cout<<"\n";
    }
    return 0;
}