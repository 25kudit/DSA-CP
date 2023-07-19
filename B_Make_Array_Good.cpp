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
        int n;
        cin>>n;
        vector<pair<int,int>> a(n),ans;
        for(int i=0;i<n;i++){
            int t ;
            cin>>t;
            a[i]={t,i+1};
        }
        sort(a.begin(),a.end());
        int mn = a[0].first;
        for(int i=1;i<n;i++){
            if(a[i].first % mn == 0){
                mn= a[i].first;
                continue;
            }
            int x = a[i].first / mn +1;
            ans.push_back({a[i].second,mn*x - a[i].first});
            mn= mn*x;
        }
        cout<<ans.size()<<"\n";
        for(auto it :ans){
            cout<<it.first<<" "<< it.second<<"\n";
        }
    }
    return 0;
}