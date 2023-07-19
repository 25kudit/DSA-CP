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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j]) == 2*(a[i]^a[j]))cnt++;
        }
    }
    cout<<cnt<<"\n";
    // unordered_set<int> s;
    // for(int i=0;i<n;i++){
    //     int t;
    //     cin>>t;
    //     s.insert(t);
    // }
    // for(auto it: s){
    //     int x=it;
    //     if(s.find(3*x)!=)
    // }
    return 0;
}