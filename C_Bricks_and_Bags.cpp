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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int ans1 =0,ans2=0,ans3=0;
        for(int i=n-1;i>1;i--){
            ans1=max(ans1,2*a[i]-a[0]-a[i-1]);
            ans2=max(ans2,abs(2*a[i-2]-a[i]-a[i-1]));
        }
        for(int i=0;i<n-1;i++){
            ans3=max(ans3,abs(2*a[i]-a[i+1]-a[n-1]));
        }
        cout<<max({ans1,ans2,ans3})<<"\n";

    }
    return 0;
}