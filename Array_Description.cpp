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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> dp(m + 2, vector<int>(n, 0));
    if (a[0] == 0)
    {
        for (int i = 1; i <= m; i++)
            dp[i][0] = 1;
    }
    else
    {
        dp[a[0]][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if(a[i]==0){
            for (int j = 1; j <= m; j++)
            {
                dp[j][i]=(dp[j][i]+(dp[j-1][i-1]+dp[j][i-1]+dp[j+1][i-1]))%1000000007;
            }
        }
        else{
            dp[a[i]][i]=(dp[a[i]][i]+(dp[a[i]-1][i-1]+dp[a[i]][i-1]+ dp[a[i]+1][i-1]))%1000000007;
        }
    }
    int ans=0;
    for(int i=1;i<=m;i++ )ans=(ans+dp[i][n-1])%1000000007;
    cout<<ans<<"\n";
    return 0;
}