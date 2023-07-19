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
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        cout<<n-1<<"\n";
        cout<<1<<" "<<n<<"\n";
        if((a[1]+a[n])%2)a[n]=a[1];
        else a[1]=a[n];
        for(int i=2;i<n;i++){
            if((a[1]+a[i])%2)cout<<1<<" "<<i<<"\n";
            else cout<<i<<" "<<n<<"\n";
        }
    }
    return 0;
}