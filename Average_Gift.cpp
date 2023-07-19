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
        // cout<<T<<"\n";
        int n,x;
        cin>>n>>x;
        set<ll> a;
        for(int i=0;i<n;i++){
            ll t;
            cin>>t;
            a.insert(t);
        }
        if(x>*(--a.end()) || x< *a.begin()){
            cout<<"NO\n";
            continue;
        }
        if(a.find(x)!=a.end()){
            cout<<"YES\n";
            continue;
        }
        cout<<"YES\n";
        // auto t=*a.upper_bound(x);


    }

    return 0;
}