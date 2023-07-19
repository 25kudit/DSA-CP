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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mx = binpow(2,n),mn=0,cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                mn+=binpow(2,cnt1);
                cnt1++;
            }
            else{
                mx -= binpow(2,cnt0);
                cnt0++;
            }
        }
        int cnt =0;
        for(int i=mn+1;i<=mx;i++)cnt++;
        cout<<cnt<<" "<<mn<<" "<<mx<<"\n";
    }
    return 0;
}