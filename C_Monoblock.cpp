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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=n*(n+1)/2;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            ans+=i*(n-i);
        }
    }
    while(m--){
        int i,x;
        cin>>i>>x;
        i--;
        if(i>0){
            if(a[i]!=a[i-1])
                ans-=(i*(n-i));
        }
        if(i<n-1){
            if(a[i]!=a[i+1]){
                ans-=((i+1)*(n-i-1));
            }
        }
        a[i]=x;
        if(i>0){
            if(a[i]!=a[i-1])
                ans+=(i*(n-i));
        }
        if(i<n-1){
            if(a[i]!=a[i+1]){
                ans+=((i+1)*(n-i-1));
            }
        }
        cout<<ans<<"\n";
    }



    return 0;
}