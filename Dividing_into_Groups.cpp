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
        vector<int> a(n);        
        for(int i=0;i<n;i++)cin>>a[i];
        auto isgood=[&](int mid){
            int s=0;
            for(auto it : a)s+=min(mid,it);
            if(s>=mid*k)return true;
            return false;
        };
        int s =0;
        for(auto it : a)s+=it;
        int l=0,r=s,ans=0;

        while(l<=r){
            int m = (l+r)/2;
            if(isgood(m)){
                l=m+1;
                ans=m;
            }
            else r=m-1;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}