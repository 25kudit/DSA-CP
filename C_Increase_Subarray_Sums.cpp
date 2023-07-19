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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        vector<int> sums(n+1,INT_MIN); //stores the maximum sum corresponding to each length
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=i;j<n;j++){
                t+=a[j];
                sums[j-i+1]=max(sums[j-i+1],t);
            }
        }
        for(int i=0;i<=n;i++){
            int ans=0;
            for(int j=1;j<=n;j++){
                ans=max(ans,sums[j]+min(i,j)*x);
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}