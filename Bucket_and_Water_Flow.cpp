#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type,less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int t = y*z +w;
        if(x-t == 0 ) cout<<"filled\n";
        else if(x-t <0) cout<<"overFlow\n";
        else cout<<"Unfilled\n";
    }

    return 0;
}