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
        int ans = 0,cnt=0,it=0,prev =0,t=0,emp=0;
        while(a[it] ==2 && it<n)it++;
        while(it<n){
            while(it<n && a[it]==1){
                t++;
                cnt++;
                it++;
            }
            ans=max(ans,prev+cnt);
            prev=t/2+1;
            cnt=0;
            while(it<n && a[it]==2)it++;
        }
        cout<<ans<<"\n";


    }
    return 0;
}