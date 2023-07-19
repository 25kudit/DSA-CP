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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1,0);
        int s=0;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            s+=a[i];
        }
        vector<vector<int>> dp(n+1,vector<int> (s+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(a[i]==j)dp[i][j]=1;
                else if(dp[i-1][j]==1)dp[i][j]=1;
                else if(j-a[i]>=0 && dp[i-1][j-a[i]]==1)dp[i][j]=1;
            }
        }
        
        vector<int> ans;
        for(int i=0;i<=s;i++)
            if(dp[n][i]==1)ans.push_back(i);
        
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it<<" ";
        cout<<"\n";


        // set<int> ans;
        // for(int i=0;i<n;i++){
        //     vector<int> temp;
        //     for(auto it : ans)temp.push_back(it+a[i]);
        //     for(auto it : temp)ans.insert(it);
        //     ans.insert(a[i]);

        // }
        // cout<<ans.size()<<"\n";
        // for(auto it:ans)cout<<it<<" ";
    }
    return 0;
}