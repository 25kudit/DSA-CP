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
        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        
        vector<vector<int>> visited(n,vector<int> (m,0));
        int curr=0,sum=0;
        auto isvalid = [&](int i,int j){
            if(i>=n || j>=m ||i<0 || j<0 || a[i][j]==0)return false;
            return true;
        };

        function<void(int,int)> dfs=[&](int i,int j){
            visited[i][j]=1;
            curr+=a[i][j];
            if(isvalid(i+1,j) && visited[i+1][j]==0)dfs(i+1,j);
            if(isvalid(i-1,j) && visited[i-1][j]==0)dfs(i-1,j);
            if(isvalid(i,j+1) && visited[i][j+1]==0)dfs(i,j+1);
            if(isvalid(i,j-1) && visited[i][j-1]==0)dfs(i,j-1);
        };
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(a[i][j]!=0 && visited[i][j]==0){
                    dfs(i,j);
                    sum=max(sum,curr);
                    curr=0;
                }
            }
        cout<<sum<<"\n";
    };
    return 0;
}