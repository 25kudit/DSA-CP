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
        int n;
        cin>>n;
        int cnt1=0;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t==1)cnt1++;
        }
        if((n-cnt1)<=cnt1)cout<<1<<"\n";
        else cout<<0<<"\n";

    }

    return 0;
}