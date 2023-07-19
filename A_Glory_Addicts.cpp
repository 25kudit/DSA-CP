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
        vector<int> fire,frost;
        int firesum=0,frostsum=0;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(a[i]==0){
                fire.push_back(t);
                firesum+=t;
            }
            else {
                frost.push_back(t);
                frostsum+=t;
            }
        }
        sort(fire.begin(),fire.end());
        sort(frost.begin(),frost.end());
        int n0=fire.size(),n1=frost.size();
        if(n0==n1){
            int ans1=0,ans2=0;
            ans1= frost[0] + 2*(firesum + frostsum - frost[0]);
            ans2= fire[0] + 2*(frostsum + firesum - fire[0]);
            cout<<max(ans1,ans2)<<"\n";
        }
        else if(n0<n1){
            int ans = 2*firesum;
            for(int i = 0;i<n1-n0;i++)ans+=frost[i];
            for(int i=n1-n0;i<n1;i++)ans+=2*frost[i];
            cout<<ans<<"\n";
        }
        else{
            int ans = 2*frostsum;
            for(int i = 0;i<n0-n1;i++)ans+=fire[i];
            for(int i=n0-n1;i<n0;i++)ans+=2*fire[i];
            cout<<ans<<"\n";
        }
    }
    return 0;
}