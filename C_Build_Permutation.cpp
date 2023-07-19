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


int square(int n){
    int x= sqrt(2*n);
    return x*x;
}
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
        vector<int> a(n,-1);
        for(int i=n-1;i>=0;i--){
            if(a[i]==-1){
                int ns= square(i);
                a[i]=ns-i;
                a[ns-i]=i;
                // cout<<i<<" "<<ns-i<<"%\n";
            }
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}