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
        int n,m;
        cin>>n>>m;
        vector<int> freq(n+1,0),cap(m);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            freq[t]++;
        }
        for(int i=0;i<m;i++)cin>>cap[i];
        priority_queue<int> pq;
        for(int i=1;i<=n;i++)pq.push(freq[i]);
        sort(cap.begin(),cap.end(),greater<int> ());
        int ans=0;
        for(int i=0;i<m;i++){
            int temp = pq.top();
            pq.pop();
            ans+=min(cap[i],temp);
            pq.push(max(0LL,temp-cap[i]));
        }
        cout<<ans<<"\n";

    }
    return 0;
}