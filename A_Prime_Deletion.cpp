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
        string s;
        cin>>s;
        if(s[0]=='1')cout<<13<<"\n";
        if(s[0]=='2')cout<<23<<"\n";
        if(s[0]=='3')cout<<37<<"\n";
        if(s[0]=='4')cout<<41<<"\n";
        if(s[0]=='5')cout<<53<<"\n";
        if(s[0]=='6')cout<<61<<"\n";
        if(s[0]=='7')cout<<71<<"\n";
        if(s[0]=='8')cout<<83<<"\n";
        if(s[0]=='9')cout<<97<<"\n";
    }
    return 0;
}