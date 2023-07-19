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
        for(int i=0;i<n;i++)cin>>a[i]>>b[i];
        int ans=1,hcf=0,lcm=1;
        for(int i=0;i<n;i++){
            hcf=__gcd(hcf,a[i]*b[i]);
            lcm=(lcm*b[i])/__gcd(lcm,b[i]);
            if(hcf%lcm){
                ans++;
                hcf = a[i]*b[i];
                lcm=b[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}