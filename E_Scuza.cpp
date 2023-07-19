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
    cin >> T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),sum(n,0),small(n,0);
        int maxtillnow=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxtillnow=max(a[i],maxtillnow);
            small[i]=maxtillnow;
        }
        sum[0]=a[0];
        for(int i=1;i<n;i++)sum[i]=sum[i-1]+a[i];
        while(k--){
            int q;
            cin>>q;
            int idx = upper_bound(small.begin(),small.end(),q)-small.begin();
            idx--;
            if(idx==-1)cout<<0<<" ";
            else cout<<sum[idx]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}