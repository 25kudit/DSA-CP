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
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> distinct(11,0);
            int f=0;
            for(int j=i;j<min(i+110,n);j++){
                if(distinct[s[j]-'0']==0)f++;
                distinct[s[j]-'0']++;
                int mx=INT_MIN;
                for(int k=0;k<11;k++)mx=max(mx,distinct[k]);
                if(mx<=f)ans++;
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}
