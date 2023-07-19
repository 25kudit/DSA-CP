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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> setcnt(32,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if(a[i]&(1<<j))setcnt[j]++;
            }
        }
        int mx=0,mn=0;
        for(int i=0;i<32;i++){
            if(setcnt[i]==0)continue;
            if(setcnt[i]==n)mn=(mn|(1<<i));
            mx=(mx|(1<<i));
        }
        cout<<mx-mn<<"\n";

    }
    return 0;
}