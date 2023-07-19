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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> bita(35, 0), bitb(35, 0);
        for (int i = 0; i < 35; i++)
        {
            if (a & (1 << i))
                bita[i] = 1;
            if (b & (1 << i))
                bitb[i] = 1;
        }
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        int ans = 0;
        for (int i = 0; i < 35; i++)
        {
            if (bita[i] != bitb[i])
                ans = (ans | (1 << i));
        }
        // cout << ans << "\n";
        int na = log2(ans) + 1, nn = log2(n) + 1;
        if ((n & (n - 1))==0)
        {
            if(na>=nn){
                cout<<-1<<"\n";
                continue;
            }
            if(ans<n){
                cout<<1<<"\n";

            }
            else{
                cout<<2<<"\n";
            }
        }
        else
        {
            if (na > nn)
            {
                cout << -1 << "\n";
                continue;
            }
            if (ans < n)
                cout << 1 << "\n";
            else
                cout << 2 << "\n";
        }
    }
    return 0;
}