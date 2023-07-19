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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,k,r,c;
        cin>>n>>k>>r>>c;
        vector<vector<char>> temp(k+1,vector<char> (k+1,'.'));
        r=(r%k==0)?k:r%k;
        c=(c%k==0)?k:c%k;
        int j=c;
        for(int i=r;i<=k;i++){
            temp[i][j]='X';
            j++;
            j=(j%k==0)?k:j%k;
        }
        for(int i=1;i<r;i++){
            temp[i][j]='X';
            j++;
            j=(j%k==0)?k:j%k;
        }
        // for(int i=1;i<=k;i++){
        //     for(int j=1;j<=k;j++) cout<<temp[i][j]<<" ";
        //     cout<<"\n";
        // }
        vector<vector<char>> ans(n+1,vector<char> (n+1,'.'));
        for(int i=1;i<=n;i+=k){
            for(int j=1;j<=n;j+=k){
                for(int m=1;m<=k;m++){
                    for(int x=1;x<=k;x++){
                        ans[i+m-1][j+x-1]=temp[m][x];
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cout<<ans[i][j];
            cout<<"\n";
        }

    }
    return 0;
}