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
        ll n;
        cin >> n;
        vector<ll> h(n);
        unordered_map<ll,ll> fr;
        ll mx=INT_MIN;
        for (ll i = 0; i < n; i++){
            cin >> h[i];
            fr[h[i]]++;
        }
        for(auto it:fr){
            it.second=(it.first+it.second-1);
            mx=max(mx,it.second);
        }
        cout<<mx<<"\n";
        
    }

    return 0;
}