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
        if(n%3==0){
            cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<"\n";
        }
        else if(n%3==1){
            cout<<(n/3)<<" "<<(n/3)+2<<" "<<(n/3)-1<<"\n";
        }
        else{
            cout<<(n/3)+1<<" "<<(n/3)+2<<" "<<(n/3)-1<<"\n";
        }
    }
    return 0;
}