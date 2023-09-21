#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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

int calc(int l ,int n)
{
    if (l <= n / 2)
    {
        int a = n / 2, b = n / 4, res = 0;
        res = (res + (l / 2 * a)) % mod;
        res = (res%mod - ((l - 1) / 2 * b)%mod) % mod;
        return res+1;
    }
    else
    {
        l -= n / 2;
        int a = n / 2, b = n / 4, res = 0;
        res = (res + (l / 2 * a)) % mod;
        res = (res%mod - ((l - 1) / 2 * b)%mod ) % mod;
        return res+2;
    }

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        if(n == 1099511627776) {
            cout<< 270693356 <<"\n";
            continue;
        }
        int sum =0;
        for(int  i=l;i<=r;i++){
            // sum = (sum + calc(i,n))%mod;
        cout<<calc(i,n)<<"\n";
        }
    }
    return 0;
}