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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        int f=0;
        for(int i=1;i<=n;i++){
            f=0;
            for(int j=2;j<=i+1;j++){
                if(a[i]%j){
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout<<"NO\n";
                f=50;
                break;
            }
        }
        if(f!=50)cout<<"YES\n";
    }
    return 0;
}