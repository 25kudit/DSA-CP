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
        vector<int> time(n);
        vector<pair<int,int>> temp(n);
        for(int i=0;i<n;i++){
            cin>>time[i]>>temp[i].first>>temp[i].second;
        }
        vector<pair<int,int>> dp(n);
        int f=0;
        for(int i=0;i<n;i++){
            if(i==0){
                // dp[i]={m-time[i],m+time[i]};
                dp[i].first = max(temp[i].first,m-time[i]);
                dp[i].second=min(temp[i].second,m+time[i]);
            }
            else {
                dp[i].first = max(temp[i].first,dp[i-1].first-(time[i]-time[i-1]));
                dp[i].second = min(temp[i].second,dp[i-1].second+(time[i]-time[i-1]));
            }
            if(dp[i].second<temp[i].first || dp[i].first>temp[i].second ){
                f=1;
                break;
            }

        }
        
        if(f)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}