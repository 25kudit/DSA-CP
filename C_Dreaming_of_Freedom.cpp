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
        if(m>=n && n>1){
            cout<<"NO\n";
            continue;
        }
        if(n%2 == 0 && m>1){
            cout<<"NO\n";
            continue;
        }
        int temp=-1;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i == 0){
                temp = i;
                break;
            }
        
        if(temp == -1 || m<temp)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}