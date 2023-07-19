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
        int n,m;
        cin>>n>>m;
        vector<int> ans(n+1,-1);
        unordered_set<int> us;
        int it = 1;
        while(m--){
            int t;
            cin>>t;
            us.insert(t);
            int ind = us.size();
            if(ans[n-ind +1] ==-1)
                ans[n-ind+1]=it;
            it++;
        }   
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

