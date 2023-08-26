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
        int m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        int usedk=0;
        if(k*ak<=m){
            m-=k*ak;
        }
        else{
            m%=k;
        } 
        int cnt=0;
        cnt+=m/k;
        m%=k;
        if(a1>=m){
            a1-=m;
            m=0;
        }
        else {
            m-=a1;
            a1=0;
        }
        if(m==0){
            cnt=max(0ll,cnt-a1/k);
        }
        else{
            cnt+=m;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}