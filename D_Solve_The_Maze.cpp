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
        vector<vector<char>> maze(n+2,vector<char> (m+2));
        for(int i=0;i<=n+1;i++)
            for(int j=0;j<=m+1;j++)
                maze[i][j]='#';

        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>maze[i][j];

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(maze[i][j]=='B'){
                    if(maze[i][j+1]=='.')maze[i][j+1]='#';
                    if(maze[i][j-1]=='.')maze[i][j-1]='#';
                    if(maze[i-1][j]=='.')maze[i-1][j]='#';
                    if(maze[i+1][j]=='.')maze[i+1][j]='#';
                }
            }
        }
        vector<vector<bool>> visited(n+2,vector<bool> (m+2,0));
        function<void(int,int)> dfs=[&](int i,int j){
            visited[i][j]=true;
            if(maze[i][j+1]!='#' && visited[i][j+1]==false)dfs(i,j+1);
            if(maze[i][j-1]!='#' && visited[i][j-1]==false)dfs(i,j-1);
            if(maze[i-1][j]!='#' && visited[i-1][j]==false)dfs(i-1,j);
            if(maze[i+1][j]!='#' && visited[i+1][j]==false)dfs(i+1,j);
        };
        if(maze[n][m]!='#')
            dfs(n,m);
            
        bool ans=true;
        for(int i=n;i>0;i--){
            for(int j=m;j>0;j--){
                if((visited[i][j]==true && maze[i][j]=='B')||(visited[i][j]==false && maze[i][j]=='G')){
                    ans=false;
                    break;
                }
            }
        }
        ans?cout<<"Yes\n":cout<<"No\n";
        
        
        
    }
    return 0;
}