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
int N=4002;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(N,0);
    dp[a]=dp[b]=dp[c]=1;
    for(int i=1;i<=n;i++){
        int t=max((i>=a)?dp[i-a]:0 ,max((i>=b)?dp[i-b]:0, (i>=c)?dp[i-c]:0));
        // if(t==0) dp[i]=0;
        if(t!=0) dp[i]=1+t;
        // cout<<dp[i]<<"\n";
    }
    cout<<dp[n]<<"\n";
    return 0;
}