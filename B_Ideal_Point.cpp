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
        set<pair<int,int>> st;
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            mn=min(mn,a);
            mx=max(mx,b);
            if(a<=k && b>=k)st.insert({a,b});
        }
        int f=0;
        for(int i=mn;i<=mx;i++){
            if(i==k)continue;
            int cnt=0;
            for(auto it :st){
                if(it.first<=i && it.second>=i)cnt++;
            }
            if(cnt == st.size()){
                f=1;
                break;
            }
        }
        if(f)cout<<"No\n";
        else cout<<"Yes\n";

    }
    return 0;
}