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
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int x=0;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            if(a[i]<=x)ans[i]=1;
            else {
                if(x<q){
                    ans[i]=1;
                    x++;
                }
                else{
                    ans[i]=0;
                }
            }
        }
        for(int i=0;i<n;i++)cout<<ans[i];
        cout<<"\n";
    }
    return 0;
}