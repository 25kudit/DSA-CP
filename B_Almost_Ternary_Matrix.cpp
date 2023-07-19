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
        int n,m;
        cin>>n>>m;
        vector<int> rep(m);
        rep[0]=1;
        for(int i=1;i<m;i++){
            if(i%4 == 1 || i%4 == 2)rep[i]=0;
            else rep[i]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<rep[j]<<" ";
            }
            cout<<"\n";
            if(i%2 == 0){
                for(int j=0;j<m;j++){
                    if(rep[j]==0) rep[j]=1;
                    else rep[j]=0;
                }
            }
        }
    }
    return 0;
}