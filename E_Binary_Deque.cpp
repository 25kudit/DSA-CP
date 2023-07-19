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
        int n, s;
        cin >> n >> s;
        vector<int> a(n + 1, 0);
        map<int, int> fid, lid;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
            lid[a[i]] = i;
        }
        // for(auto it: lid) cout<<it.first<<" "<<it.second<<"\n";
        for (int i = 1; i <= n; i++)
        {
            if (fid.find(a[i]) == fid.end())
            {
                fid[a[i]] = i;
            }
        }
        if(a[n]<s) {
            cout<<-1<<"\n";
            continue;
        }
        // for (auto it : fid)
        //     cout << it.first << " " << it.second << "\n";
        // for(int i=0;i<=n;i++)cout<<i<<" "<<a[i]<<"\n";
        int ans = -1;
        for (int i = 0; i <= n; i++)
        {
            if (a[i] == 0)
            {
                ans = max(ans, lid[s]);
            }
            else
            {
                ans = max(ans, lid[a[i] + s ] - fid[a[i]] );
            }
            // if(n-ans==6) cout<<lid[a[i] + s ]<<fid[a[i]]<<"&\n";
        }
        if (ans == -1)
            cout << -1 << "\n";
        else
            cout << n - ans << "\n";
    }
    return 0;
}