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
        int a1,a2,a3;
        a1=a2=a3=INT_MAX;
        for(int i=0;i<n;i++){
            int m;
            string s;
            cin>>m>>s;
            if(s=="11")a1=min(a1,m);
            else if(s=="01")a2=min(a2,m);
            else if(s=="10")a3=min(a3,m);
        }
        int ans = min(a1,a2+a3);
        if(ans>=INT_MAX)cout<<-1<<"\n";
        else cout<<ans<<"\n";
    }
    return 0;
}