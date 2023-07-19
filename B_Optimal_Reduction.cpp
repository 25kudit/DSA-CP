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
        int mx=INT_MIN;
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        int i=0,f=0;
        while(a[i]!=mx && i<n-1){
            if(a[i]>a[i+1]){
                f=1;
                break;
            }
            i++;
        }
        if(f==1){
            cout<<"NO\n";
            continue;
        }
        while(i<n-1){
            if(a[i]<a[i+1]){
                f=1;
                break;
            }
            
            i++;
        }
        if(f==1){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";


    }
    return 0;
}