#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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
        int n,m;
        cin>>n>>m;
        vector<int> a(n*m);
        for(int i=0;i<n*m;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int ans1,ans2,ans3,ans4;
        ans1 = (m-1)*n*(a[n*m-1]-a[0]) + (n-1)*(a[n*m-2]-a[0]);
        ans3 = (n-1)*m*(a[n*m-1]-a[0]) + (m-1)*(a[n*m-2]-a[0]);
        reverse(a.begin(),a.end());
        ans2 = (m-1)*n*(a[0] - a[n*m-1]) + (n-1)*(a[0] - a[n*m-2]);
        ans4 = (n-1)*m*(a[0] - a[n*m-1]) + (m-1)*(a[0] - a[n*m-2]);
        cout<<max({ans1,ans2,ans3,ans4})<<"\n";
    }
    return 0;
}