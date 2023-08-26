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
        int n = s.size();
        string t1="",t2="";
        for(int i=0;i<n;i++){
            t1+='(';
            t2+="()";
        }
        for(int i=0;i<n;i++)t1+=')';
        if(t1.find(s)==string::npos)cout<<"YES\n"<<t1<<"\n";
        else if(t2.find(s)==string::npos)cout<<"YES\n"<<t2<<"\n";
        else cout<<"NO\n";
    }
    return 0;
}