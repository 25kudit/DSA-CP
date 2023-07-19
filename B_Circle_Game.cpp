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
        for(int i=0;i<n;i++)cin>>a[i];
        if(n%2){
            cout<<"Mike\n";
            continue;
        }
        int mini,minx=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<minx){
                mini=i;
                minx=a[i];    
            }
        }
        mini++;
        if(mini%2==0)cout<<"Mike\n";
        else cout<<"Joe\n";

    }
    return 0;
}