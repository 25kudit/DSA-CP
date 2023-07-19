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
        int n;
        cin>>n;
        vector<int> a(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=(a[i]-mini);
        }
        cout<<sum<<"\n";
    }

    return 0;
}