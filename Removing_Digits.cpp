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

int maxdig(int n){
    int mxd=INT_MIN;
    while(n>0){
        mxd=max(mxd,n%10);
        n/=10;
    }
    return mxd;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    for(int i=1;i<=n;i++){
        dp[i]=1+dp[i-maxdig(i)];
    }
    cout<<dp[n];
    return 0;
}