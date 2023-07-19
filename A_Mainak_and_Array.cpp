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
        for(int i=0;i<n;i++)cin>>a[i];
        int ans1,ans2,ans3;
        int mx=INT_MIN;
        for(int i=1;i<n;i++)mx=max(mx,a[i]);
        ans1=mx-a[0];
        int mn=INT_MAX;
        for(int i=0;i<n-1;i++)mn=min(mn,a[i]);
        ans2=a[n-1]-mn;
        ans3=INT_MIN;
        for(int i=0;i<n;i++){
            ans3=max(ans3,a[i]-a[(i+1)%n]);
        }
        cout<<max(ans1,max(ans2,ans3))<<"\n";

    }
    return 0;
}