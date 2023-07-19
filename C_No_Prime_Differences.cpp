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
        int n,m;
        cin>>n>>m;
        if(n%2==0){
            for(int i=1;i<=n;i++){
                for(int j=0;j<m;j++){
                    cout<<i+j*(n)<<" ";
                }
                cout<<"\n";
            }
        }
        else if(m%2==0){
            int it=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<it++<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            vector<vector<int>> a(n,vector<int> (m));
            int k=1;
            for(int i=0;i<n;i+=2){
                for(int j=0;j<m;j++){
                    a[i][j]=k;
                    k++;
                }
            }
            for(int i=1;i<n;i+=2){
                for(int j=0;j<m;j++){
                    a[i][j]=k;
                    k++;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++)
                    cout<<a[i][j]<<" ";
                cout<<"\n";
            }
            
        }
    }
    return 0;
}