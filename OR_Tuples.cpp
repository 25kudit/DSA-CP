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
        vector<int> t(3,0);
        cin>>t[0]>>t[1]>>t[2];
        
        vector<int> cnt(31,0);
        for(int k=0;k<3;k++){
            for(int i=0;i<=30;i++){
                if(t[k]& 1<<i)
                    cnt[i]++;
            }
        }
        int ans=1;
        for(int i=0;i<31;i++){
            if(cnt[i]==3){
                ans*=4;
            }
            else if(cnt[i]==1){
                ans=0;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}