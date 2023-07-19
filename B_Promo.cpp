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
    // cin >> T;
    while (T--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a(n+1,0);
        a[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<=n;i++) a[i]+=a[i-1];
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            cout<<a[n-x+y]-a[n-x]<<"\n";
        }
    }
    return 0;
}