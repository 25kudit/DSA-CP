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
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1, 0);
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    vector<vector<int>> mx(m + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j <= m; j++)
        {
            mx[i][j]=max(mx[i][j-1],a[j]);
            // cout<<rec[i][j]<<" ";
        }
        // cout<<"\n";
    }
    int q;
    cin >> q;
    while (q--)
    {
        int xs, ys, xf, yf, k;
        cin >> xs >> ys >> xf >> yf >> k;
        if (abs(xs - xf) % k != 0 || abs(ys - yf) % k != 0)
        {
            cout << "NO\n";
            continue;
        }
        int t = (n - xs) / k;
        xs += t * k;
        int f = 0;
        // cout<<mx[ys][yf]<<"&\n";
        // continue;
        if(ys<=yf){
            if(mx[ys][yf]>=xs)f=1;
        }
        else{
            if(mx[yf][ys]>=xs)f=1;
        }
        // if (rec[xs][ys] - rec[xs][yf] != 0)
        //     f = 1;
        if (f)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}