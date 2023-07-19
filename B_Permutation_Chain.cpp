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
        int x=n,c=0;
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
            a[i] = i;
        cout<<n<<"\n";
        while (x--)
        {
            int t;
            t = a[1];
            a[1] = a[1 + c];
            a[1 + c] = t;
            c++;
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}