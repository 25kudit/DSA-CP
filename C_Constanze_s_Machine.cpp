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
#define mod 1000000007


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        string s;
        cin>>s;
        int n=s.size();
        vector<int> dp(n+1,0);
        for(auto it: s){
            if(it=='w'||it=='m'){
                cout<<0<<"\n";
                return 0;
            }
        }
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i]+dp[i-1])%mod;
            if(s[i-1]==s[i-2] && (s[i-1]=='u' || s[i-1]=='n'))dp[i]=(dp[i]+dp[i-2])%mod;
        }        
        cout<<dp[n]<<"\n";


    }
    return 0;
}