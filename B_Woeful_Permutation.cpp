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
        if(n%2){
            cout<<1<<" ";
            for(int i=3;i<=n;i+=2)cout<<i<<" "<<i-1<<" ";
        }
        else{
            for(int i=2;i<=n;i+=2)cout<<i<<" "<<i-1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}