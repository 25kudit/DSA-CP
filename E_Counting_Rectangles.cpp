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
        int n,q;
        cin>>n>>q;
        vector<vector<int>> pre(2000,vector<int> (2000,(int)0));
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            pre[x][y]+=x*y;
        }
        // for(int i=1;i<2000;i++){
        //     for(int j=1;j<2000;j++){
        //         pre[i][j]+=(pre[i-1][j]+pre[i][j-1]);
        //     }
        // }
        for(int i=1;i<2000;i++){
            for(int j=1;j<2000;j++){
                pre[i][j]+=pre[i][j-1];
            }
        }
        for(int i=1;i<2000;i++){
            for(int j=1;j<2000;j++){
                pre[i][j]+=pre[i-1][j];
            }
        }
        while(q--){
            int hs,ws,hl,wl;
            cin>>hs>>ws>>hl>>wl;
            hs++;
            ws++;
            hl--;
            wl--;
            // int ans=0;
            // for(int i=hs;i<=hl;i++){
            //     ans+=pre[i][wl]-pre[i][ws];
            // }
            // ans=pre[hl][wl]-pre[hs][ws];
            cout<<pre[hl][wl] - pre[hs-1][wl] - pre[hl][ws-1] + pre[hs-1][ws-1]<<"\n";
        }
    }
    return 0;
}