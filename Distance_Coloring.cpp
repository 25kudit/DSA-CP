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
#define mod 1000000007

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = (res * i)%mod;
    return res;
}

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
        if(n<k){
            int ans =1;
            while(n>0){
                ans=(ans*k)%mod;
                k--;
                n--;
            }
            cout<<ans<<"\n";
        }
        else cout<<fact(k)<<"\n";
    }
    return 0;
}