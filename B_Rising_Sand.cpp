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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        if(k==1){
            cout<<(n-1)/2<<"\n";
            continue;
        }
        int cnt=0;
        for(int i=1;i<n-1;i++){
            if(a[i]>(a[i-1]+a[i+1]))cnt++;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}