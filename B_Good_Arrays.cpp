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
        vector<int> a(n);
        
        int s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(n==1){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<n;i++){
            if(a[i]==1)s-=2;
            else s-=1;
        }
        if(s<0)cout<<"NO\n";
        else cout<<"YES\n";

        

    }
    return 0;
}