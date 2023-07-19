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
        vector<int> a(n+1),b(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        int f=0;
        for(int i=1;i<=n;i++){
            int j=(i==n)?1:i+1;
            if(b[j]>=a[i]){
                if(b[i]>b[j]+1 || b[i]<a[i]){
                    f=1;
                    break;
                }
            }
            else{
                if(a[i]!=b[i]){
                    f=1;
                    break;
                }
            }
            j++;
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}