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
        map<string ,vector<int>> mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string t;
                cin>>t;
                mp[t].push_back(i);
            }
        }
        vector<int> ans(3,0);
        for(auto it:mp){
            vector<int> temp=it.second;
            if(temp.size()==3)continue;
            if(temp.size()==1)ans[temp[0]]+=3;
            else{
                ans[temp[0]]++;
                ans[temp[1]]++;
            }
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<"\n";
    }
    return 0;
}