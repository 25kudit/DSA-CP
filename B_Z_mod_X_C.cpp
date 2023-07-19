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
        vector<ll> no(3,0);
        cin>>no[0]>>no[1]>>no[2];
        sort(no.begin(),no.end());
        ll n= no[2]/no[0];
        cout<<n*no[1]+no[0]<<" "<<no[1]<<" "<<n*no[1]+no[0]+no[2]<<"\n";
    }

    return 0;
}