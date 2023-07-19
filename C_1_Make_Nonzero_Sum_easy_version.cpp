#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if(n%2){
            cout<<-1<<"\n";
            continue;
        }
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i+=2){
            if(i<n-1 && a[i]==a[i+1])ans.push_back({i,i+1});
            else {
                ans.push_back({i,i});
                ans.push_back({i+1,i+1});
            }
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it.first+1<<" "<<it.second+1<<"\n";

    }
    return 0;
}