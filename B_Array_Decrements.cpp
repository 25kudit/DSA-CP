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
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int diff=0,f=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                f=1;
                break;
            }
            if(a[i]!=0 && b[i]!=0){
                diff=a[i]-b[i];
                f=2;
                break;
            }
        }
        // cout<<diff<<"%\n";
        if(f==1){
            cout<<"NO\n";
            continue;
        }
        else if(f==0){
            cout<<"YES\n";
            continue;
        }
        f=0;
        for(int i=0;i<n;i++){
            if(b[i]==0 && a[i]>diff){
                f=1;
                break;
            }
            if(b[i]!=0 && (b[i]+diff)!=a[i]){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO\n";

        }
        else{
            cout<<"YES\n";
        }
        
    }
    return 0;
}