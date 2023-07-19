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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        map<int,int> mp,mp1;
        int cf=0;
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1]){
                cf++;
            }
            else{
                cf=1;
            }
            mp[a[i]]=max(mp[a[i]],cf);
        }
        cf=1;
        for(int i=0;i<n;i++){
            if(i>0 && b[i]==b[i-1]){
                cf++;
            }
            else{
                cf=1;
            }
            mp1[b[i]]=max(mp1[b[i]],cf);
        }
        
        int mx =0;
        for(int i=0;i<n;i++){
            mx=max({mx,mp[a[i]]+mp1[a[i]],mp[b[i]]+mp1[b[i]]});
        }
        cout<<mx<<"\n";
    }
    return 0;
}