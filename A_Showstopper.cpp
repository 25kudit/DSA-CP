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
        int mx1,mx2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        mx1=a[n-1];
        mx2=b[n-1];
        for(int i=0;i<n-1;i++){
            if(a[i]>mx1 || b[i]>mx2)
                swap(a[i],b[i]);
        }
        int f=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[n-1]|| b[i]>b[n-1]){
                f=1;
                break;
            }
        }
        if(f)cout<<"No\n";
        else cout<<"Yes\n";

    }
    return 0;
}