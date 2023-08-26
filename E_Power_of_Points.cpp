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
        vector<pair<int,int>> vp;
        int pre =0,suff=0;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            suff+=t;
            vp.push_back({t,i});
        }
        sort(vp.begin(),vp.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int x= vp[i].first,idx =vp[i].second;
            ans[idx]=i*x-pre + suff-(n-i)*x + n;
            suff-=x;
            pre+=x;
        }
        for(auto it : ans)cout<<it<<" ";
        cout<<"\n";
        


    }
    return 0;
}