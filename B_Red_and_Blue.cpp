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
        for(int i=0;i<n;i++) cin>>a[i];
        int m;
        cin>>m;
        vector<int> b(m);
        for(int i=0;i<m;i++) cin>>b[i];
        int s1,s2,mx1,mx2;
        s1=s2=0;
        mx1=mx2=0;
        for(int i=0;i<n;i++){
            s1+=a[i];
            mx1=max(mx1,s1);
        }
        for(int i=0;i<m;i++){
            s2+=b[i];
            mx2=max(mx2,s2);
        }
        cout<<mx1+mx2<<"\n";

    }
    return 0;
}