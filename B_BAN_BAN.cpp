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
        if(n%2==0){
            int x=n/2;
            cout<<x<<"\n";
            for(int i=1;i<=x;i++){
                cout<<2+3*(i-1)<<" "<<2+3*(i-1+x)+1<<"\n";
            }
        }
        else{
            int x=n/2;
            cout<<x+1<<"\n";
            for(int i=1;i<=x;i++){
                cout<<2+3*(i-1)<<" "<<2+3*(i-1+x)+1<<"\n";
            }
            cout<<3*x+2<<" "<<3*n<<"\n";

        }
    }
    return 0;
}