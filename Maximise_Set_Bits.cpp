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
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        int res = 0;
        
        // for(auto it:pt) cout<<it<<" ";
        while (n > 1 && k != 0)
        {
            int x = k / n;
            // int t= *pt.lower_bound(x);
            if (x == 0)
            {
                res += 1;
                k -= 1;
            }
            else
            {
                res += (int)(log2(x) + 1);
                k -= ((int)pow(2, (int)(log2(x) + 1)) - 1);
            }
            n--;
            // cout << res << " " << (int)pow(2, (int)(log2(x) + 1)) - 1 << "&\n";
        }
        for (int i = 0; i < 32; i++)
        {
            if (k & (1 << i))
                res++;
        }

        cout << res << "\n";
    }
    return 0;
}