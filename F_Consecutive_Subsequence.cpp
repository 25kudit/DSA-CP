#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
    // cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=max(mp[a[i]],mp[a[i]-1]+1);
        }
        int cnt=0,ele;
        for(auto it:mp){
            if(it.second > cnt){
                cnt = it.second;
                ele=it.first;
            }
        }
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(a[i]==ele){
                ans.push_back(i+1);
                ele--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it<<" ";
        cout<<"\n";

    }
    return 0;
}