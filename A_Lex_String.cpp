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
        int n, k, m;
        cin >> n >> m >> k;
        string a, b, ans = "";
        cin >> a >> b;
        multiset<char> st1, st2;
        for (int i = 0; i < n; i++)
            st1.insert(a[i]);
        for (int i = 0; i < m; i++)
            st2.insert(b[i]);
        int te = 0, f = 0;
        while (n > 0 && m > 0)
        {
            if (*st1.begin() < *st2.begin())
            {
                if(f==2){
                    f=1;
                    te=0;
                }
                if (te < k)
                {
                    ans += *st1.begin();
                    st1.erase(st1.begin());
                    n--;
                    te++;
                    f=1;
                }
                else
                {
                    ans += *st2.begin();
                    st2.erase(st2.begin());
                    m--;
                    te = 0;
                    f=2;
                }
            }
            else
            {
                if(f==1){
                    f=2;
                    te=0;
                }
                if (te < k)
                {
                    ans += *st2.begin();
                    st2.erase(st2.begin());
                    m--;
                    te++;
                    f=2;
                }
                else{
                    ans += *st1.begin();
                    st1.erase(st1.begin());
                    n--;
                    te=0;
                    f=1;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}