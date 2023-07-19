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
        int suma=0,sumb=0;
        for(int i=0;i<n;i++) cin>>a[i],suma+=a[i];
        for(int i=0;i<n;i++) cin>>b[i],sumb+=b[i];
        if(suma!=sumb){
            cout<<-1<<"\n";
            continue;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(a[i]-b[i]);
        }
        if(ans%2)cout<<-1<<"\n";
        else cout<<ans/2<<"\n";
    }
    return 0;
}