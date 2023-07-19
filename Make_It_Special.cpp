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
        int n,q;
        cin>>n>>q;
        int dig=0,y=n;
        while(y){
            dig++;
            y=y/2;
        }
        int np=((int)1<<dig);
        while(q--){
            int l,r;
            cin>>l>>r;
            int a=2*(r/np);
            int b=2*(l/np);
            if(l%np==0)b--;
            if((r+1)%np==0)a++;
            cout<<a-b<<"\n";
        }
    }
    return 0;
}