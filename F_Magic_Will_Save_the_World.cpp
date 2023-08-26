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
        int f,w,n;
        cin>>f>>w>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int tot = accumulate(v.begin(),v.end(),0ll);
        vector<int> dp(tot+1,0);
        dp[0]=1;
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=tot;j>=v[i];j--){
                if(dp[j-v[i]])
                    dp[j]=1;
            }
        }
        for(int i=0;i<=tot;i++){
            if(dp[i]){
                int a=i,b=tot-i;
                int curr=max((a+f-1)/f,(b+w-1)/w);
                res=min(res,curr);
            }
        }
        deque<int> dq;
        // dq.back
        cout<<res<<"\n";

    }
    return 0;
}