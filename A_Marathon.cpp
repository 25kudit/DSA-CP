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
        vector<int> a(4);
        int x,ind;
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        x=a[0];
        sort(a.begin(),a.end());
        for(int i=0;i<4;i++){
            if(a[i]==x)ind=i;
        }
        cout<<3-ind<<"\n";
    }
    return 0;
}