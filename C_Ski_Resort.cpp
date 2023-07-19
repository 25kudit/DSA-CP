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
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> len;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]<=q)cnt++;
            else{
                if(cnt>=k)len.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt>=k)len.push_back(cnt);
        int ans =0;
        auto mul = [&](int x){
            return (x*(x+1))/2;
        };
        for(auto it : len)ans+=mul(it+1-k);
        cout<<ans<<"\n";

    }
    return 0;
}