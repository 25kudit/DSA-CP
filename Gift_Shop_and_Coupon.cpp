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
        ll n,k;
        cin>>n>>k;
        vector<ll> cost(n);
        for(int i=0;i<n;i++){
            cin>>cost[i];
        }
        sort(cost.begin(),cost.end());
        int i=0;
        ll sum=0,ans=0;
        while(sum+cost[i] <= k && i<n){
            sum+=cost[i];
            ans++;
            i++;
        }
        if(2*(k-sum)>=cost[i] && i<n) ans++;
        cout<<ans<<"\n";
    }

    return 0;
}