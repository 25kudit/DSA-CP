#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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
        vector<int> l(n),r(n);
        for(int i=0;i<n;i++)cin>>l[i];
        for(int i=0;i<n;i++)cin>>r[i];

        int mx =0,res = INT_MAX;
        for(int i=0;i<n;i++)
            mx+=(r[i]-l[i]+1);
        if(mx<k){
            cout<<-1<<"\n";
            continue;
        }

        multiset<int> ms;
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=r[i]-l[i]+1;
            ms.insert(r[i]-l[i]+1);
            while(curr>k && *ms.begin()==1){
                curr--;
                ms.erase(ms.begin());
            }
            if(curr >= k)
                res=min(res,2*ms.size()+r[i]-(curr-k));
        }
        cout<<res<<"\n";
    }
    return 0;
}