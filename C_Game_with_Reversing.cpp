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
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2){
            cout<<0<<"\n";
            continue;
        }
        int d1=0,d2=0,a1,a2;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])d1++;
        }

        reverse(s1.begin(),s1.end());
        if(s1==s2){
            cout<<2<<"\n";
            continue;
        }
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])d2++;
        }
        //first case
        if(d1%2)a1=2*d1-1;
        else a1=2*d1;
        //second case
        if(d2%2)a2=2*d2;
        else a2=2*d2-1;
        cout<<min(a1,a2)<<"\n";
    }
    return 0;
}