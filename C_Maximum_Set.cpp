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
#define mod 998244353
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int l,r;
        cin>>l>>r;
        int cnt = log2(r/l)+1;
        int ans=0;
        ans+=max(0ll,(r/(1<<(cnt-1))-l+1));
        ans+=max(0ll,(r/((1<<(cnt-2))*3)-l+1))*(cnt-1);
        cout<<cnt<<" "<<ans<<"\n";
    }
    return 0;
}