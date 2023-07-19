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

int binpow(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans + m) % m;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++)cin>>a[k];
        if(a[1]-a[0] <a[0]){
            cout<<"No\n";
            continue;
        }
        // int d=a[1]-a[0];
        int f=1;
        for(int i=2;i<k;i++){
            if((a[i]-a[i-1])<(a[i-1]-a[i-2])){
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<"No\n";
            continue;
        }
        



    }
    return 0;
}