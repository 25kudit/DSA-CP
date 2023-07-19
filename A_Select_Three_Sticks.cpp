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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int ans1,ans2,ans3;
        ans1=ans2=ans3=INT_MAX;
        for(int i=0;i<n-2;i++){
            ans1=min(ans1, a[i+1]-a[i]+a[i+2]-a[i]);
        }
        for(int i=2;i<n;i++){
            ans2=min(ans2,a[i]-a[i-1]+a[i]-a[i-2]);
        }
        for(int i=1;i<n-1;i++){
            ans3=min(ans3,a[i]-a[i-1]+a[i+1]-a[i]);
        }
        cout<<min(ans1,min(ans2,ans3))<<"\n";
    }
    return 0;
}