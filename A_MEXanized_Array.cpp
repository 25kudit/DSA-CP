#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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
        int n,k,x;
        cin>>n>>k>>x;
        if(k>n){
            cout<<-1<<"\n";
            continue;
        }
        if(x<k-1){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> a;
        for(int i=0;i<k;i++)a.push_back(i);
        int mx = x;
        if(x==k)mx--;
        for(int i=a.size();i<n;i++)a.push_back(mx);
        cout<<accumulate(a.begin(),a.end(),0)<<"\n"; 
    }
    return 0;
}