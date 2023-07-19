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
        for(int i=0;i<n;i++)cin>>a[i];

        vector<pair<int,int>> vp;
        for(int i=0;i<n/2;i++){
            vp.push_back({min(a[i],a[n-i-1]),max(a[i],a[n-i-1])});
        }
        sort(vp.begin(),vp.end());
        int mod = 1e9+10;
        for(auto it : vp){
            int a = it.first %mod,b=it.second%mod;
            if(a == b)continue;
            else{
                if(mod == 1e9+10)mod = max(a,b)-min(a,b);
                else mod = __gcd(max(a,b)-min(a,b),mod);
            }
        }
        if(mod == 1e9+10)cout<<0<<"\n";
        else cout<<mod<<"\n";
    }
    return 0;
}