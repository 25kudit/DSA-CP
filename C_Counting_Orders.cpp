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
        vector<int> a(n),b(n);
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int> ());
        int ans=1;
        for(int i=0;i<n;i++){
            int t = n-(int)(upper_bound(a.begin(),a.end(),b[i])-a.begin());
            ans=(ans*max(t-i,(int)0))%(int)(1e9+7);
        }
        cout<<ans<<"\n";


    }
    return 0;
}