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
        int x,y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<"\n";
        }
        else if(x<y){
            cout<<y-x<<"\n";

        }
        else{
            int t=(x-y+1)/2;
            if(y+2*t == x)cout<<t<<"\n";
            else cout<<t+1<<"\n";
        }
    }
    return 0;
}