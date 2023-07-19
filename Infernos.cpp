#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll> h(n);
        ll t1, t2,mx=0;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            mx=max(mx,h[i]);
        }
        t1=mx;
        t2=0;
        for(int i=0;i<n;i++){
            if(h[i]%x==0) t2+=h[i]/x;
            else t2+=(h[i]/x+1);
        }
        t2>t1?cout<<t1<<"\n":cout<<t2<<"\n";
    }

    return 0;
}