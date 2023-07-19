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
        vector<vector<int>> a(n+1,vector<int> (m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        vector<vector<int>> dpmx(n+1,vector<int> (m+1,0)),dpmn(n+1,vector<int> (m+1,0));
        dpmx[1][1]=a[1][1];
        dpmn[1][1]=a[1][1];
        for(int i=2;i<=n;i++) {
            dpmx[i][1]=dpmx[i-1][1]+a[i][1];
            dpmn[i][1]=dpmx[i-1][1]+a[i][1];
        }
        for(int i=2;i<=m;i++) {
            dpmx[1][i]=dpmx[1][i-1]+a[1][i];
            dpmn[1][i]=dpmx[1][i-1]+a[1][i];
        }
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                
                    dpmx[i][j]=max(dpmx[i-1][j],dpmx[i][j-1])+a[i][j];
                    dpmn[i][j]=min(dpmn[i-1][j],dpmn[i][j-1])+a[i][j];
                
                // else if(i>1){
                //     dpmx[i][j]=dpmx[i-1][j]+a[i][j];
                //     dpmn[i][j]=dpmn[i-1][j]+a[i][j];
                // }
                // else if(j>1){
                //     dpmx[i][j]=dpmx[i][j-1]+a[i][j];
                //     dpmn[i][j]=dpmn[i][j-1]+a[i][j];
                // }
            }
        }
        if(dpmx[n][m] % 2 || dpmn[n][m] > 0 || dpmx[n][m] < 0)
            cout << "NO\n";
        else
            cout << "YES\n";
        
    }
    return 0;
}