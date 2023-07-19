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
        int x=a[0];
        for(int i=1;i<n;i++){
            x=__gcd(x,a[i]);
        }
        if(x==1){
            cout<<0<<"\n";
            continue;
        }
        
        if(__gcd(x,n)==1)cout<<1<<"\n";
        else if(__gcd(x,n-1)==1)cout<<2<<"\n";
        else cout<<3<<"\n";
    }
    return 0;
}