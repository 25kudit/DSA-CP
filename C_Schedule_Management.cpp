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
int n, m;

bool isgood(int t,vector<int> &a)
{
    int extra=0,need=0;
    for(int i=1;i<=n;i++){
        if(a[i]<=t){
            extra+=(t-a[i])/2;
        }
        else{
            need+=a[i]-t;
        }
    }
    return extra>=need;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        vector<int> a(n+1, 0);

        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;
            a[t]++;
        }
        int low = 0, high = 2 * m + 10;
        while (low < high - 1)
        {
            int mid = (low + high) / 2;
            if (isgood(mid,a))
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
        cout << high << "\n";
    }
    return 0;
}