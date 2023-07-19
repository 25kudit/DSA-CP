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
    int T;
    cin >> T;
    while (T--)
    {
        ll n,m,x;
        cin>>n>>m>>x;
        if(x==m) cout<<0<<"\n";
        else{
            if(x>n)cout<<n-1<<"\n";
            else {
                ll sum = x*n;
                int i=1;
                while((n-i)*(x+1) > sum)i++;
                cout<<n-i<<"\n";
            }
        }
    }

    return 0;
}