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
        int n;
        cin>>n;
        vector<int> a(n+1,0),pre(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pre[i]=pre[i-1]+a[i];
        }
        
        if(pre[n]%3){
            cout<<0<<"\n";
            continue;
        }
        int req= pre[n]/3;
        vector<int> suff(n+1,0),cnt(n+1,0);
        suff[n]=a[n];
        if(a[n]==req && req!=0)cnt[n]++;
        for(int i=n-1;i>0;i--){
            suff[i]=suff[i+1]+a[i];
            if(suff[i]==req)cnt[i]=cnt[i+1]+1;
            else cnt[i]=cnt[i+1];
        }
        // for(auto it:cnt)cout<<it<<" ";
        int ans=0,s=0;
        for(int i=1;i<n-1;i++){
            s+=a[i];
            if(s==req)ans+=cnt[i+1];
        }
        cout<<ans<<"\n";

        

    }
    return 0;
}