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
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        vector<int> ht(n);
        for(int i=0;i<n;i++)cin>>ht[i];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(abs(ht[i]-h)%k==0 && ht[i]-h!=0){
                if(abs(ht[i]-h)/k<m)cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}