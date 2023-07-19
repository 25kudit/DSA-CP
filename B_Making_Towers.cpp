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
        map<int ,vector<int>> mp;
        for(int i=0;i<n;i++){
            if(mp[a[i]].size()==0)
                mp[a[i]].push_back(i);
            else{
                if(mp[a[i]].back()%2 != i%2){
                    mp[a[i]].push_back(i);
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(mp[i].size()==0)cout<<0<<" ";
            else cout<<mp[i].size()<<" ";
        }
        cout<<"\n";
        

    }
    return 0;
}