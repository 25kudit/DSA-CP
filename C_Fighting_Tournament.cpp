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
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> a(n+1);
        int mxi,mx=INT_MIN;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            if(a[i]>mx){
                mx=a[i];
                mxi=i;
            }
        }
        
        vector<int> c(n+1,0);
        for(int i=1;i<=n;){
            int j=i+1,f=0;
            if(i>1 && a[i]>a[i-1])c[i]++;
            while(a[i]>a[j] && j<=n){
                c[i]++;
                j++;
                // if(j==n){
                //     f=1;
                //     break;
                // }
            }
            // if(f!=1)c[j]++;
            i=j;
        }
// cout<<"H\n";
//         continue;
        while(q--){
            int i,k;
            cin>>i>>k;
            if(k<=i-2){
                cout<<0<<"\n";
                continue;
            }
            if(i==mxi){
                if(i==1)cout<<k-i+1<<"\n";
                else cout<<k-i+2<<"\n";
                continue;
            }
            if(i==1)cout<<min(c[i],k-i+1)<<"\n";
            else cout<<min(c[i],k-i+2)<<"\n";
        }

    }
    return 0;
}