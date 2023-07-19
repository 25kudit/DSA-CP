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
        n*=2;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        if(n==2){
            cout<<a[1]-a[0]<<"\n";
            continue;
        }
        int a1=0;
        for(int i=0;i<n;i++)a1+=abs(a[i]);
        if(n==4){
            int a2=0;
            for(int i=0;i<n;i++)a2+=abs(a[i]-2);
            a1=min(a1,a2);
        }
        if(n%4==0){
            int a3=0;
            for(int i=0;i<n-1;i++)a3+=abs(a[i]-(-1));
            a3+=abs(a[n-1]-n/2);
            a1=min(a1,a3);
        }
        cout<<a1<<"\n";
    }
    return 0;
}