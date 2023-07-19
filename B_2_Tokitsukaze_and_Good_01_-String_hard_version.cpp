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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int  f = -1, opr = 0, part = 0;
        for(int i=0;i<n-1;i+=2)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                if (f == -1 || f == 0)
                {
                    f = 1;
                    part++;
                }
                // i += 2;
            }
            else if (s[i] == '0' && s[i + 1] == '0')
            {
                if (f == -1 || f == 1)
                {
                    f = 0;
                    part++;
                }
                // i += 2;
            }
            else if ((s[i] == '1' && s[i + 1] == '0') || (s[i] == '0' && s[i + 1] == '1'))
            {
                opr++;
                // i += 2;
            }
            // i=i+2;
        }
        cout << opr << " " << (part!=0?part:1) << "\n";
    }

    return 0;
}