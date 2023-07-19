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
        int n,k,z;
        cin>>n>>k>>z;
        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<=z;i++){
            int idx = k-2*i+1;
            if(idx<0)break;
            int tsum=0,sum=0;
            for(int j=1;j<=idx;j++){
                sum+=a[j];
                tsum=max(tsum,a[j]+a[j+1]);
            }
            tsum*=i;
            ans=max(ans,sum+tsum);
        }
        cout<<ans<<"\n";

    }
    return 0;
}