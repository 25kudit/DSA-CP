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
        vector<int> x,y;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            x.push_back(min(a,b));
            y.push_back(max(a,b));
        }
        int ans=0;
        for(auto it:x)ans+=it;
        ans*=2;
        sort(y.begin(),y.end());
        ans+=(*y.begin()+*y.rbegin());
        for(int i=1;i<n;i++){
            ans+=y[i]-y[i-1];
        }
        cout<<ans<<"\n";


    }
    return 0;
}