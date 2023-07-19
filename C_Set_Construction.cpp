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
        vector<string> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<set<int>> ans(n);
        for(int i=0;i<n;i++){
            ans[i].insert(i+1);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i][j]=='1'){
                    for(auto it:ans[i])
                        ans[j].insert(it);
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(a[i][j]=='1'){
                    for(auto it: ans[i])
                        ans[j].insert(it);
                }
            }
        }
        for(int i = 0;i<n;i++){
            cout<<ans[i].size()<<" ";
            for(auto it : ans[i])
                cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}