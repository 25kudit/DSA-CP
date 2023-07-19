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
        string a,b;
        cin>>a>>b;
        int cnt=0;
        for(int i=1;i<n;i++)
            if(a[i-1]==a[i])cnt++;
        for(int i=1;i<m;i++)
            if(b[i-1]==b[i])cnt++;

        if(cnt>1){
            cout<<"No\n";
            continue;
        }
        if(cnt==1 && a[n-1]==b[m-1]){
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
        
        
          
    }
    return 0;
}