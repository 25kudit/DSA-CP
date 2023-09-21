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
        int n,m;
        cin>>n>>m;
        string s,p;
        cin>>s>>p;
        int res = INT_MAX;
        auto count = [&](int ind){
            int ans=0,i=ind,j=0;
            while(j<m){
                int c1 = abs(s[i]-p[j]);
                ans+=min({c1,10-c1});
                j++;
                i++;
            }
            return ans;
            
        };

        for(int i=0;i<=n-m;i++){
            res = min(res,count(i));
        }
        cout<<res<<"\n";
    }
    return 0;
}