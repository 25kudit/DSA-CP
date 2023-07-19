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
        vector<int> sum(n+1);
        sum[0]=0;
        for(int i=1;i<=n;i++){
            sum[i]=sum[i-1]+a[i];
        }
        int ans=INT_MIN;
        if(k<=n){
            for(int i=0;i<=n-k;i++){
                ans=max(ans,sum[i+k]-sum[i]);
            }
            ans+=k*(k-1)/2;
        }
        else ans= sum[n]+n*(2*k-n-1)/2;
        cout<<ans<<"\n";
    }
    return 0;
}