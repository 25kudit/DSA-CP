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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int i=0,ms=0;
        while(i<n){
            int mxp=INT_MIN,mxn=INT_MIN;
            while(a[i]>0 && i<n){
                mxp=max(mxp,a[i]);
                i++;
            }
            while(a[i]<0 && i<n){
                mxn=max(mxn,a[i]);
                i++;
            }
            if(mxp!=INT_MIN) ms+=mxp;
            if(mxn!=INT_MIN) ms+=mxn;

        }
        cout<<ms<<"\n";
    }
    return 0;
}