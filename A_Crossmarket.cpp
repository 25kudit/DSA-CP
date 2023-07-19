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
        if(n==1 && m==1){
            cout<<0<<"\n";
            continue;
        }
        if(n==1){
            cout<<m<<"\n";
            continue;
        }
        if(m==1){
            cout<<n<<"\n";
            continue;
        }
        cout<<min(2*(n-1)+m , 2*(m-1)+n)<<"\n";
    }
    return 0;
}