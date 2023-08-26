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
        vector<int> v(n),dup(n);
        // set<int> st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            dup[i]=v[i];
        }
        sort(dup.begin(),dup.end());
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(dup[i])==mp.end())mp[dup[i]]=i;
        }
        int f=0;
        for(int i=0;i<n;i++){
            if((n-(*mp.lower_bound(i+1)).second)!=v[i]){
                f=1;
                break;
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
