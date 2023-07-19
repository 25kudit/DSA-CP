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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second<b.second;
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
        set<int> s;
        for(int i=1;i<=n;i++) s.insert(i);
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            v.push_back({l,r-l});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto it: v){
            cout<<it.first<<" "<<(it.first+it.second)<<" "<<*(s.lower_bound(it.first))<<"\n";
            s.erase(s.lower_bound(it.first));
        }
    }
    return 0;
}