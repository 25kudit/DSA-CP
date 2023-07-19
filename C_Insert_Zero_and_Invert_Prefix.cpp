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
        vector<int> a(n),ans;
        for(int i=0;i<n;i++)cin>>a[i];
        if(a[n-1]==1){
            cout<<"NO\n";
            continue;
        }
        int it=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]==0)ans.push_back(0);
            else{
                it++;
                if(i==0 || a[i-1]==0){
                    ans.push_back(it);
                    it=0;
                }
                else ans.push_back(0);
            }
        }
        cout<<"YES\n";
        for(auto it : ans)cout<<it<<" ";
        cout<<"\n";


    }
    return 0;
}