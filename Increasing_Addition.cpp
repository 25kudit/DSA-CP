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
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        multiset<int> diff;
        for(int i=0;i<n-1;i++)diff.insert(max((int)0, a[i]-a[i+1]));
        // cout<<ans<<"&\n";
        while(q--){
            int i,x;
            // ans=INT_MIN;
            cin>>i>>x;
            i--;
            // a[i]=x;
            // for(int i=0;i<n-1;i++)ans= max(ans, a[i]-a[i+1]);
            if(i<n-1){
                diff.erase(diff.find(max((int)0, a[i]-a[i+1])));
                diff.insert(max((int)0, x-a[i+1]));
            }
            if(i>0){
                diff.erase(diff.find(max((int)0, a[i-1]-a[i])));
                diff.insert(max((int)0, a[i-1]-x));
            }
            a[i]=x;
            // ans = max(ans,x-a[i+1]);
            // if(i>0)ans = max(ans,a[i-1]-x);
            cout<<*diff.rbegin()<<"\n";
        }
    }
    return 0;
}