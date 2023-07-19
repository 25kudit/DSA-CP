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
        vector<vector<int>> a;
        set<int> s;
        vector<int> ans(n+1);
        for(int i=1;i<=n;i++){
            int t,l,r=n;
            cin>>t;
            l=(i/(t+1))+1;
            if(t)r=i/t;
            a.push_back({r,l,i});
            s.insert(i);
        }
        sort(a.begin(),a.end());
        for(auto it : a){
            ans[it[2]]=*s.lower_bound(it[1]); 
            s.erase(ans[it[2]]);
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
        

    }
    return 0;
}