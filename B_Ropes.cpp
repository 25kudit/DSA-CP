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
float n, k;

bool isgood(float x,vector<float> a)
{
    int s=0;
    for(int i=0;i<n;i++){
        s+=(a[i]/x);
    }
    return s>=k;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    vector<float> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    float l = 0, r = 1e7 + 3;
    for (float i = 0; i < 100; i++)
    {
        float m = (l + r) / 2;
        if (isgood(m,a))
            l = m;
        else
            r = m;
    }
    cout<<fixed;
    cout<<setprecision(7);
    cout << l << "\n";
    return 0;
}