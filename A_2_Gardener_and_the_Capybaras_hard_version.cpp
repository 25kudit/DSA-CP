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
        int n;
        n=s.size();
        if(s[0]==s[1] || s[0]=='b')
            cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,n-2)<<"\n";
        
        else
            cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<"\n";

    }
    return 0;
}