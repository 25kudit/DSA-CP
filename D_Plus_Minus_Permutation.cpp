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
        int n,a,b;
        cin>>n>>a>>b;
        int lcm = (a*b)/__gcd(a,b);
        int n1 = n/a - n/lcm,n2=n/b-n/lcm;
        // cout<<n1<<" "<<n2<<"\n";
        int s1= n*(n+1)/2;
        n1=n-n1;
        s1-=n1*(n1+1)/2;
        int s2=n2*(n2+1)/2;
        cout<<s1-s2<<"\n";
    }
    return 0;
}