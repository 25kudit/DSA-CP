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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> inc(n,1),dec(n,1);
    int mx1=1,mx2=1;
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]) dec[i]=dec[i+1]+1;
        mx1=max(mx1,dec[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]) inc[i+1]=inc[i]+1;
        mx2=max(mx2,inc[i+1]);
    }
    // for(auto it: inc) cout<<it<<" ";
    // cout<<"\n";
    // for(auto it: dec) cout<<it<<' ';
    // cout<<"\n";
    // watch(mx1);
    // watch(mx2);
    int mx=max(mx1,mx2),cnt=0;
    for(int i=0;i<n;i++) if(dec[i]==mx)cnt++;
    for(int i=0;i<n;i++) if(inc[i]==mx)cnt++;
    // watch(cnt);
    if(cnt!=2){
        cout<<0<<"\n";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(dec[i]==mx && dec[i]==inc[i]){
            if(mx%2){
                cout<<1<<"\n";
                return 0;
            }
        }
    }
    cout<<0<<"\n";
    return 0;
}