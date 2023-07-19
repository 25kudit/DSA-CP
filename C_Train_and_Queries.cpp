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
        int n,k;
        cin>>n>>k;
        map<int,int> mp1,mp2;
        for(int i=0;i<n;i++) {
            int t;
            cin>>t;
            if(mp1.find(t)==mp1.end())mp1[t]=i;
            mp2[t]=i;
        }
        while(k--){
            int a,b;
            cin>>a>>b;
            if(mp1.find(a)==mp1.end()|| mp1.find(b)==mp1.end()){
                cout<<"NO\n";
                continue;    
            }
            if(mp1[a]<=mp2[b])cout<<"YES\n";
            else cout<<"NO\n";
        }

    }
    return 0;
}