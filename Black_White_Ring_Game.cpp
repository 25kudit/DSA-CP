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
        int n1=0,n0=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==0)n0++;
            else n1++;
        }
        int mx,curr=0;
        mx=2*min(n0,n1);
        if(a[0]!=a[n-1])curr++;
        for(int i=0;i<n-1;i++)if(a[i]!=a[i+1])curr++;
        if(((mx-curr)/2 )%2 )cout<<"Alice\n";
        else cout<<"Bob\n";

    }
    return 0;
}