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
        if(m==1){
            for(int i=0;i<=n;i++)cout<<0<<"\n";
            continue;
        }
        if(n>=m)cout<<m<<"\n";
        else cout<<n+1<<"\n";
        int it=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<(j+it)%m<<" ";
            }
            cout<<"\n";
            it++;
            if(it%m==0)it++;
        }
    }
    return 0;
}