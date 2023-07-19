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
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int same=0,diff=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i])same++;
            else diff++;
        }
        if(same && diff){
            cout<<"NO\n";
            continue;
        }
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++){
            if(a[i]=='1')
                ans.push_back({i+1,i+1});
        }
        if(ans.size()%2==1 && diff==0 || ans.size()%2==0 && same==0){
            ans.push_back({1,1});
            ans.push_back({2,n});
            ans.push_back({1,n});
        }
        cout<<"YES\n"<<ans.size()<<"\n";
        for(auto it: ans)cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
}