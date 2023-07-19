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
// #define int long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    vector<int> sq(2047277,0);
    for(int i=1;i<2047277;i++)sq[i]=i*i;
    for(int i=1;i<2047277;i++)sq[i]+=sq[i-1];
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int lvl=1;
        while(lvl*(lvl+1)/2 < n)lvl++;
        int ans = n*n,l=n,r=n;

        lvl--;

        while(lvl>0){
            int liml = lvl*(lvl-1)/2 +1,limr = lvl*(lvl+1)/2;
            l=max(liml,l-lvl-1);
            r=min(limr,r-lvl);
            // cout<<liml<<" "<<limr<<"\n";
            // cout<<l<<" "<<r<<"\n";
            ans+=sq[r]-sq[l-1];
            lvl--;
        }
        cout<<ans<<"\n";

    }
    return 0;
}