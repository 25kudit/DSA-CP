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
        int low =1,high = 1e12,ans=-1;

        auto isgood = [&](int x){
            int cnt =0 ;
            for(int i=0;i<n;i++){
                cnt += max(0ll,x-a[i]);
            }
            return cnt<=k;
        };
        
        while(low<=high){
            int mid = (low+high)/2;
            if(isgood(mid)){
                ans = mid;
                low=mid+1;
            }
            else high =mid-1;
        }
        cout<<ans<<"\n";

    }
    return 0;
}