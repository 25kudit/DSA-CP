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
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int> (n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }

        
        int cnt=0;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!=a[n-i-1][n-j-1])cnt++;
            }
        }
        if(n%2){
            for(int i=0;i<n/2;i++)
                if(a[n/2][i]!=a[n/2][n-i-1])cnt++;
        }
        if(cnt>k)cout<<"NO\n";
        else{
            if((k-cnt)%2==0 || (n&1))cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}