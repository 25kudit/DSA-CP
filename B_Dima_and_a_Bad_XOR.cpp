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
    // cin >> T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>> (1024,{0,0}));

        for(int i=0;i<m;i++){
            dp[0][a[0][i]].first=1;
            dp[0][a[0][i]].second=i;
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                for(int x=0;x<1024;x++){
                    if(dp[i-1][a[i][j]^x].first==1){
                        dp[i][x].first=1;
                        dp[i][x].second=j;
                    
                    }
                }
            }
        }
        int xr=0,f=0;
        for(int i=1;i<1024;i++){
            if(dp[n-1][i].first==1){
                f=1;
                xr=i;
                // cout<<i<<"&\n";
                break;
            }
        }
        // cout<<xr<<"\n";
        // continue;
        // for(int i=0;i<2;i++){
        //     for(int j = 0 ;j<20;j++){
        //         cout<<dp[i][j].first<<"-"<<dp[i][j].second<<" ";
        //     }
        //     cout<<"\n";
        // }
        // continue;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            ans.push_back(dp[i][xr].second+1);
            xr^=a[i][dp[i][xr].second];
        }
        reverse(ans.begin(),ans.end());
        if(f){
            cout<<"TAK\n";
            for(auto it: ans)cout<<it<<" ";
            cout<<"\n";
        }

        else cout<<"NIE\n";
    }
    return 0;
}