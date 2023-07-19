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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<int> cnta(32,0),cntb(32,0);
        for(int i=0;i<n;i++){
            int x=a[i],y=b[i];
            for(int j=0;j<32;j++){
                if(x&(1<<j))cnta[j]++;
                if(y&(1<<j))cntb[j]++;
            }
        }
        int ans=0;
        for(int i=31;i>=0;i--){
            if(cntb[i]>=(n-1)/2+1 && cnta[i]<=n/2){
                ans+=(1<<i);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}