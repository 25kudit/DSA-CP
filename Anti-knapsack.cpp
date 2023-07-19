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
        int n,k;
        cin>>n>>k;
        // if((n*(n+1)/2)<k){
        //     for(int i=1;i<n;i++)cout<<i<<" ";
        //     cout<<"\n";
        //     continue;
        // }
        int i=2;
        for(;i<24;i++){
            if(k%i !=0){
                break;
            }
        }
        for(int j=1;j<=n;j++){
            cout<<i*j<<" ";
        }
        cout<<"\n";

    }

    return 0;
}