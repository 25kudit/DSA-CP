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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll csum=0,ci,cj;
                ci=i,cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    csum+=a[ci][cj];
                    ci++;
                    cj++;
                }
                ci=i,cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    csum+=a[ci][cj];
                    ci--;
                    cj++;
                }
                ci=i,cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    csum+=a[ci][cj];
                    ci++;
                    cj--;
                }
                ci=i,cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    csum+=a[ci][cj];
                    ci--;
                    cj--;
                }
                csum-=3*a[i][j];
                sum=max(sum,csum);
            }
        }
        cout<<sum<<"\n";
    }

    return 0;
}