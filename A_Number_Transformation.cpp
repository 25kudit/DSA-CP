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
        int x,y;
        cin>>x>>y;
        if(x>y || y%x!=0) {
            cout<<0<<" "<<0<<"\n";
            continue;
        }
        if (x==y){
            cout<<1<<" "<<1<<"\n";
            continue;
        }
        int temp=y/x;
        cout<<1<<" "<<temp<<"\n";

    }

    return 0;
}