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
        vector<int> a(n),b(m);
        int xr=0,orr=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            xr^=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            orr|=b[i];
        }
        if(n%2){
            int mx=xr,mn=xr;
            for(int i=0;i<31;i++){
                if(orr & (1<<i))mx=(mx|(1<<i));
            }
            cout<<mn<<" "<<mx<<"\n";
        }
        else{
            int mn = xr,mx=xr;
            for(int i=0;i<31;i++){
                if(orr & (1<<i)){
                    int comp = ((1<<30)-1)^(1<<i);
                    mn = (mn & comp);
                }
            }
            cout<<mn<<" "<<mx<<"\n";
        }
    }
    return 0;
}