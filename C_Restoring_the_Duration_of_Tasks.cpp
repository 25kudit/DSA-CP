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
        vector<int> st(n);
        vector<int> fn(n);
        for(int i=0;i<n;i++) cin>>st[i];
        for(int i=0;i<n;i++) cin>>fn[i];
        vector<int> ans;
        int lst=fn[0];
        ans.push_back(fn[0]-st[0]);
        for(int i=1;i<n;i++){
            if(st[i]<lst){
                ans.push_back(fn[i]-lst);
            }
            else{
                ans.push_back(fn[i]-st[i]);
            }
            lst=fn[i];
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";

    }
    return 0;
}