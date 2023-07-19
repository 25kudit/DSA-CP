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
        vector<int> a(n),ind(n+1);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            ind[a[i]]=i;
        }
        int f=0;
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
                f=i;
                break;
            }
        }
        // cout<<f<<"%\n";
        if(f==0){
            cout<<0<<"\n";
            continue;
        }
        unordered_set<int> us;
        int mxi=0;
        for(int i=0;i<f;i++){
            mxi=max(mxi,ind[a[i]]);
        }
        for(int i=0;i<=mxi;i++)us.insert(a[i]);
        cout<<us.size()<<"\n";
    }
    return 0;
}