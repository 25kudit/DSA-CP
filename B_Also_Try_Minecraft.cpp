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



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> a(n),pre(n,0),post(n,0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1])pre[i]=pre[i-1];
        else pre[i]=pre[i-1]+(a[i-1]-a[i]);
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]>=a[i+1])post[i]=post[i+1];
        else post[i]=post[i+1]+(a[i+1]-a[i]);
    }
    // for(auto it:post) cout<<it<<" ";
    // cout<<"\n";
    while(m--){
        int s,t;
        cin>>s>>t;
        if(s<=t)cout<<pre[t-1]-pre[s-1]<<"\n";
        else cout<<post[t-1]-post[s-1]<<"\n";
    }
    return 0;
}