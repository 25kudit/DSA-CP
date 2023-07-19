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

bool check(int n,int r){
    int t = n*(r-1)+1;
    int np = (log(t)/log(r) +1e-6);
    int org = (pow(r,np)+1e-6);
    return t==org;
}

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
        int r=2,f=7,flag=0;
        while(f<=n){
            if(check(n,r)){
                flag=1;
                break;
            }
            r++;
            f=1+r+r*r;
        }
        if(flag ==1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}