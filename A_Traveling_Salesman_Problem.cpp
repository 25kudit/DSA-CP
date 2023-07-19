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
        int x1, x2, y1, y2;
        x1 = x2 = y1 = y2 = 0;
        while (n--)
        {
            int xt, yt;
            cin >> xt >> yt;
            if (yt == 0 && xt >= 0)
                x1 = max(x1, xt);
            else if (yt == 0 && xt < 0)
                x2 = max(x2, -1 * xt);
            else if (xt == 0 && yt >= 0)
                y1 = max(y1, yt);
            else if(xt==0 && yt<0)
                y2 = max(y2, -1 * yt);
        }
        cout<<2*(x1+x2+y1+y2)<<"\n";
    }
    return 0;
}