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
        int n,h,w;
        cin>>n>>w>>h;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int f=0,l,r;
        l=b[0]+h-w;
        r=b[0]-h+w;
        for(int i=1;i<n;i++){
            int d=a[i]-a[i-1];
            l=max(l+d,b[i]+h-w);
            r=min(r+d,b[i]-h+w);
            if(l>r){
                f=1;
                break;
            }
        }
        if(f)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}