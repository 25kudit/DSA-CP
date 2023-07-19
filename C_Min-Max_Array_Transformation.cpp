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
        multiset<int> ms;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            ms.insert(t);
        } 
        for(int i=0;i<n;i++){
            cout<<*ms.lower_bound(a[i])-a[i]<<" ";
        }
        cout<<"\n";
        vector<int> mx;
        int x=*ms.rbegin();
        for(int i=n-1;i>=0;i--){
            mx.push_back(*ms.rbegin()-a[i]);
            ms.erase(ms.lower_bound(a[i]));
            // cout<<x-a[i]<<" ";
        }
        for(int i=mx.size()-1;i>=0;i--)cout<<mx[i]<<" ";
        cout<<"\n";
    }
    return 0;
}