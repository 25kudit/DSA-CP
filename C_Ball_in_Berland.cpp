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
        int a,b,k;
        cin>>a>>b>>k;
        vector<int> af(a,0),bf(b,0),ap(k),bp(k);
        for(int i=0;i<k;i++){
            cin>>ap[i];
            af[--ap[i]]++;
        }
        for(int i=0;i<k;i++){
            cin>>bp[i];
            bf[--bp[i]]++;
        }
        int ans=0;
        for(int i=0;i<k;i++){
            ans+=(k-af[ap[i]]-bf[bp[i]]+1);
        }
        cout<<ans/2<<"\n";


    }
    return 0;
}