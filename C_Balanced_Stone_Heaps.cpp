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

bool isgood(int x,vector<int> &a){
    int n=a.size();
    vector<int> extra(n,0);
    for(int i=n-1;i>=2;i--){
        int t=extra[i]+a[i];
        if(t<x)return false;
        int d=min(a[i],t-x)/3;
        extra[i-1]+=d;
        extra[i-2]+=2*d;

    }
    for(int i=0;i<n;i++){
        if(a[i]+extra[i]<x)return false;

    }
    return true;
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
        int l=INT_MAX,r=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            l=min(l,a[i]);
            r=max(r,a[i]);
        }
        while(l<r-1){
            int mid=(l+r)/2;
            if(isgood(mid,a)){
                l=mid;
                // cout<<l<<"&\n";
            }
            else {
                r=mid;
                // cout<<r<<"%\n";
            }
        }
        cout<<l<<"\n";
        // cout<<isgood(3,a)<<"\n";
    }
    return 0;
}