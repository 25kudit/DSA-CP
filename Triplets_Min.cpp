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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        map<int,int> mp;
        int prev=0;
        for(int i=0;i<n-2;i++){
            int x = n-i-1;
            mp[a[i]]=prev+(x*(x-1))/2;
            prev=mp[a[i]];
        }
        map<int,int> rmp;
        for(auto it : mp)rmp[it.second]=it.first;
        while(q--){
            int k;
            cin>>k;
            cout<<(*rmp.lower_bound(k)).second<<"\n";
        }

    }
    return 0;
}