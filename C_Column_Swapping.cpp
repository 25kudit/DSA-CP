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
// bool cmp(vector<int> &a,vector<int> &b){
//     return
// }
signed main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int t;
                cin >> t;
                a[i].push_back(t);
            }
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            vector<int> b = a[i];
            sort(b.begin(), b.end());
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] != b[j])
                {
                    s.insert(j + 1);
                }
            }
            if (s.size() > 2)
            {
                break;
            }
        }
        if (s.size() > 2)
        {
            cout << -1 << "\n";
            continue;
        }
        if (s.size() == 0)
        {
            cout << 1 << " " << 1 << "\n";
            continue;
        }
        int x = *s.begin() - 1, y = *(--s.end()) - 1;
        // watch(x);
        // watch(y);
        for (int i = 0; i < n; i++)
        {
            int t = a[i][x];
            a[i][x] = a[i][y];
            a[i][y] = t;
        }
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (a[i][j] > a[i][j + 1])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                break;
        }
        if(f==1)cout<<-1<<"\n";
        else cout<<x+1<<" "<<y+1<<"\n";
    }
    return 0;
}