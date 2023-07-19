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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(auto it:mp){
            while(mp[it.first]>0 && mp[it.first*x]>0){
                mp[it.first]--;
                mp[it.first*x]--;
            }
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        int ans=0;
        for(auto it:mp)ans+=it.second;
        // cout<<it.first<<" "<<it.second<<"\n";
        cout<<ans<<"\n";
    }
    return 0;
}