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
        int l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;
        if(a==b){
            cout<<0<<"\n";
            continue;
        }
        if((a+x>r && a-x<l) || (b+x>r && b-x<l)){
            cout<<-1<<"\n";
            continue;
        }
        
        if(abs(a-b)>=x){
            cout<<1<<"\n";
            continue;
        }
        if((r-a>=x && r-b>=x) || (a-l>=x && b-l>=x)){
            cout<<2<<"\n";
            continue;
        }
        cout<<3<<"\n";

    }
    return 0;
}