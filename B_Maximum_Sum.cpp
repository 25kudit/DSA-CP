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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a.begin(),a.end());
        vector<int> pre(n+1,0);
        for(int i=1;i<=n;i++)
            pre[i]+=pre[i-1]+a[i-1];
        
        int sum=0,tot=pre[n];

        for(int i=0;i<=k;i++){
            if(2*i<n && n-(k-i)>=0) {
                int curr = pre[n-(k-i)]-pre[2*i];
                sum=max(sum,curr);
            }
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}