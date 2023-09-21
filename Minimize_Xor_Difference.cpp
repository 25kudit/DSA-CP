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
        int ta,tb,a,b;
        cin>>ta>>tb;
        a=min(ta,tb);
        b=max(ta,tb);
        int res= 0,f=0;
        for(int i=31;i>=0;i--){
            if(b & (1<<i)){
                if((a & (1<<i)) == 0){
                    if(f!=0)res|=(1<<i);
                    f=1;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}