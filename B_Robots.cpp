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
        int n,m;
        cin>>n>>m;
        char s[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>s[i][j];
            }
        }
        int up=0,f=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i][j]=='R') {
                    up=i+1;
                    f=1;
                    break;
                }
            }
            if(f==1)break;
        }
        f=0;
        int left=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s[j][i]=='R'){
                    left=i+1;
                    f=1;
                    break;
                }
            }
            if(f==1)break;
        }
        int found=0;
        for(int i=0;i<up;i++){
            for(int j=0;j<left;j++){
                if(s[i][j]=='R'){
                    found=1;
                    break;
                }
            }
            if(found==1)break;
        }
        if(found==1) cout<<"YES\n";
        else cout<<"NO\n";


    }
    return 0;
}