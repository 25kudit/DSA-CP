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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            mp[t]++;
        }
        if(mp.size()==1){
            cout<<1<<"\n";
            continue;
        }
        int cnt1=0,cnt2=0;
        for(auto it:mp){
            if(it.second>1) cnt2++;
            else cnt1++;
        }
        cout<<cnt2 + (cnt1+1)/2<<"\n";

        
    }
    return 0;
}