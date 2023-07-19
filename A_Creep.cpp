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
        int a,b;
        cin>>a>>b;
        int x=a,y=b;
        vector<int> ans;
        while(x>0 && y>0){
            ans.push_back(1);
            y--;
            ans.push_back(0);
            x--;
        }
        while(x>0){
            ans.push_back(0);
            x--;
        }
        while(y>0){
            ans.push_back(1);
            y--;
        }
        for(auto it:ans)cout<<it;
        cout<<"\n";
    }
    return 0;
}