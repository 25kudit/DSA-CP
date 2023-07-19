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
        int n,q;
        cin>>n>>q;
        vector<int> a(n),freq(n+1,0);
        vector<pair<int,int>> que;
        for(int i=0;i<n;i++)cin>>a[i];
        while(q--){
            int p,q;
            cin>>p>>q;
            p--;
            freq[p]++;
            freq[q]--;
            que.push_back({p,q});
        }
        for(int i=1;i<=n;i++)freq[i]=freq[i-1]+freq[i];
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++)vp.push_back({freq[i],i});
        sort(vp.begin(),vp.end());
        sort(a.begin(),a.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[vp[i].second]=a[i];
        }
        vector<int> csum(n+1,0);
        for(int i=0;i<n;i++){
            csum[i+1]=csum[i]+ans[i];
        }
        int sum=0;
        for(auto it : que){
            sum+=csum[it.second]-csum[it.first];
        }
        cout<<sum<<"\n";
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}