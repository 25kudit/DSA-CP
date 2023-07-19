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
        cin >> n;
        vector<int> a(n);
         for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt=0,i=1;
        while(i<n){
            if(a[i]<a[i-1]){
                cnt++;
                i+=2;
            }
            else i++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}