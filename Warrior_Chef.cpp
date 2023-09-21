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
        int n,h;
        cin>>n>>h;
        vector<int> a(n);
        int l=0,r=0,ans=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            r=max(r,a[i]);
        }
        r++;

        auto isgood = [&](int k){
            int str = h;
            for(int i=0;i<n;i++){
                if(a[i]>k)str-=a[i];
            }
            return str>0;
        };
        while(l<=r){
            int mid = (l+r)/2;
            if(isgood(mid)){
                ans = mid;
                r = mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<"\n";

    }
    return 0;
}