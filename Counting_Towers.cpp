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
#define mod 1000000007


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
        vector<vector<int>> dp(2,vector<int> (2,0));
        dp[0][0]=dp[0][1]=1;
        for(int i=1;i<n;i++){
            dp[i%2][0]=(4*dp[(i-1)%2][0]+dp[(i-1)%2][1])%mod;
            dp[i%2][1]=(2*dp[(i-1)%2][1]+dp[(i-1)%2][0])%mod;
        }
        cout<<(dp[(n-1)%2][0]+dp[(n-1)%2][1])%mod<<"\n";
    }
    return 0;
}