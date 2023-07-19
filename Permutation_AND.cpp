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
        if(n==1){
            cout<<1<<"\n"<<1<<"\n";
            continue;
        }
        if(n%2==1){
            cout<<-1<<"\n";
            continue;
        }
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
        vector<int> ans(n+1,-1);
        for(int i=n;i>0;i--){
            
            if(ans[i]==-1){
                int x=pow(2,(int)log2(i)+1)-1;
                ans[i]=x-i;
                ans[x-i]=i;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}