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

int binsr(vector<int> &a,int n,int x){
    int l=0,r=n+1;
    while(l<r-1){
        int m = (l+r)/2;
        if(a[m]<=x)l=m;
        else r=m;
    }
    return l;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    while(k--){
        int x;
        cin>>x;
        cout<<binsr(a,n,x)<<"\n";
    }
    return 0;
}