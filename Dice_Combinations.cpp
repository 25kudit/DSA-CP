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

// int nways(int n,vector<int> &dp){
//     if(n==0)return 1;
//     for(int i=1;i<=6;i++){
//         if(n-i>=0){
//             if(dp[n-i]!=-1)return 1+dp[n-i];
//             else return dp[n-i]=1+nways(n-i,dp);
//         }
//     }
//     return 0;
// }


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,ways=0;
    cin>>n;
    vector<int> dp(n+1,0);
    // cout<<nways(n,dp);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]= (dp[i]+dp[i-j])%mod;
            }
            else{
                break;
            }
        }
    }
    cout<<dp[n];
    return 0;
}