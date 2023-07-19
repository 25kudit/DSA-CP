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
        int n,tot=0;
        cin>>n;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            um[t]++;
        }
        int cnt=0;
        for(auto it:um){
            tot+=it.second;
            if(it.second%2)cnt++;
        }
        tot+=cnt;
        cnt+=tot%4;
        cout<<cnt<<"\n";

    }
    return 0;
}