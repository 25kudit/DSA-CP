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
        int n,k;
        cin>>n>>k;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            mp[abs(i-a[i])%k]++;
        }
        if(mp[0]==n)cout<<0<<"\n";
        else if(mp[0]==n-2)cout<<1<<"\n";
        else cout<<-1<<"\n";
        
    }
    return 0;
}