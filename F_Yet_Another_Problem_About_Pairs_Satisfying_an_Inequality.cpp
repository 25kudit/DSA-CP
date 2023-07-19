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

bool cmp(pair<int,int> &a,pair<int,int> &b ){
    if(a.first==b.first)return a.second<b.second;
    return a.first<b.first;
}

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
        vector<pair<int,int>> a;
        for(int i=1;i<=n;i++){
            int t;
            cin>>t;
            if(t<i)a.push_back({t,i});
        }
        int sz=a.size();
        sort(a.begin(),a.end(),cmp);
        vector<int> count(200009,0);
        for(int i=0;i<sz;i++){
            count[a[i].first]++;
        }
        for(int i=200007;i>=0;i--)count[i]+=count[i+1];
        int ans=0;
        for(int i=0;i<sz;i++){
            ans+=count[a[i].second+1];
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}