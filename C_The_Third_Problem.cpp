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
        vector<int> a(n),pos(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            pos[a[i]]=i;
        }
        int ans=1,l=min(pos[0],pos[1]),r=max(pos[0],pos[1]);
        for(int i=2;i<n;i++){
            if(pos[i]<l)l=pos[i];
            else if(pos[i]>r) r=pos[i];
            else{
                ans = (ans*(r-l+1-i))%1000000007;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}