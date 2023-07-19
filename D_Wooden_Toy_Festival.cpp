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
        
        sort(a.begin(),a.end());
        int l=0,r=1e9+7,ans;

        auto isgood=[&](int m){
            int it=1,st=a[0],cnt=1;
            while(it<n){
                if(abs(a[it]-st)>2*m){
                    cnt++;
                    st=a[it];
                }
                it++;
            }
            return cnt<=3;
        };

        while(l<=r){
            int mid = (l+r)/2;
            if(isgood(mid)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}