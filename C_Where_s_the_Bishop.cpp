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
        // int c;
        // cin>>c;
        char b[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>b[i][j];
            }
        }
        int f=0;
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                if(b[i-1][j-1]=='#' && b[i-1][j+1]=='#' && b[i+1][j-1]=='#' && b[i+1][j+1]=='#'){
                    cout<<i+1<<" "<<j+1<<"\n";
                    f=1;
                    break;
                }
            }
            if(f) break;
        }
    }
    return 0;
}