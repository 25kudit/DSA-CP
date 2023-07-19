#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int tot = n,left=n,ans=0;
        for(int i=0;i<30 && left >0;i++){
            int t = (1<<i);
            cout<<"- "<<t<<"\n";
            cout<<flush;
            int res ;
            cin>>res;
            if(res ==tot-1){
                ans|=t;
            }
            else{
                int set = i+(res-tot)+1;
                ans|=(1<<set);
                i=set;
            }
            left--;
            tot = res;
        }
        cout<<"! "<<ans<<"\n";
        cout<<flush;
    }
    return 0;
}