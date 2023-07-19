#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
// #define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl
#define mx 100000000
 
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
        vector<float> pos(n),time(n);
        for(int i=0;i<n;i++)cin>>pos[i];
        for(int i=0;i<n;i++)cin>>time[i];
        float low=0,high=mx,mid;
        for(int c =0 ;c<100;c++){
            mid=(low+high)/(float)2;
            float temp1 =0,temp2=0;
            for(int i=0;i<n;i++)temp1=max(temp1,(abs(((low+mid)/(float)2)-pos[i]) + time[i]));
            for(int i=0;i<n;i++)temp2=max(temp2,(abs(((high+mid)/(float)2)-pos[i]) + time[i]));
            if(temp1<temp2)high = mid;
            else low = mid;
 
        }
        cout<<setprecision(6)<<fixed<<mid<<"\n";
    }
    return 0;
}