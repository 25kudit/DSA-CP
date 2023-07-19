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




/* test cases print karwa raha tha isiliye itne wrong submission hue h 
logic building mat judge karne lagna meri */





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
        int mn=INT_MAX,mx = INT_MIN;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mx = max(mx, a[i]);
        }
        int res = a[0];
        for(int i=1;i<n;i++){
            res = __gcd(res,a[i]);
        }

        
        if(res==1)cout<<mx<<"\n";
        else cout<<mx/res<<"\n";
        

    }
    return 0;
}