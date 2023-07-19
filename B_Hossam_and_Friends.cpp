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

int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        set<pair<int,int>> s;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            s.insert({min(a,b),max(a,b)});
        }
        int st=0,ans=n;
        for(auto it:s){
            int t = it.first;
            if(st<t){
                int x = it.first-st+1;
                ans+=binpow(2,x)-binpow(2,x-2)-x-1;
                st=it.second;
            }
            int x= it.second-it.first;
            ans+=binpow(2,x)-binpow(2,x-2)-x-1;
            st=it.second;
        }
        if(st<n){
            int x= n-st+1;
            ans+=binpow(2,x)-binpow(2,x-2)-x-1;
        }
        cout<<ans<<"\n";

    }
    return 0;
}