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
        string s;
        cin>>s;
        int n;
        cin>>n;
        int h=(s[0]-'0')*10 +(s[1]-'0');
        int m=(s[3]-'0')*10 +(s[4]-'0');
        int hs=n/60;
        int ms=n%60;
        vector<int> f(1443,0);
        while(1){
            if(f[h*60 + m]!=0)break;
            f[h*60 + m]=1;
            m+=ms;
            h=(h+hs+m/60)%24;
            m=m%60;
        }
        int ans=f[0]+f[70]+f[140]+f[210]+f[280]+f[350]+f[601]+f[671]+f[741]+f[811]+f[881]+f[951]+f[1202]+f[1272]+f[1342]+f[1412];
        cout<<ans<<"\n";
    }
    return 0;
}