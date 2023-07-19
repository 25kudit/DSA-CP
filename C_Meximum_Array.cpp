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
#define mx 1000001


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
        vector<int> a(n),ans;
        multiset<int> have,taken;
        for(int i=0;i<n;i++){
            cin>>a[i];
            have.insert(a[i]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            taken.insert(a[i]);
            have.erase(have.find(a[i]));
            while(taken.find(cnt)!=taken.end())cnt++;
            if(have.find(cnt)==have.end()){
                ans.push_back(cnt);
                cnt=0;
                taken.clear();

            }
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it<<" ";
        cout<<"\n";


    }
    return 0;
}