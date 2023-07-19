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
    // cin >> T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<pair<char,char>>> a(n,vector<pair<char,char>> (m));
        vector<vector<int>> dist(n,vector<int> (m,-1));
        int sx,sy,dx,dy;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j].first;
                if(a[i][j].first=='A')sx=i,sy=j;
                if(a[i][j].first=='B')dx=i,dy=j;
            }
        }

        function<bool(int,int)> isvalid = [&](int x,int y){
            if(x<0 || x>n-1 || y<0 || y>m-1 || a[x][y].first=='#')return false;
            return true;
        };
        vector<pair<int,int>> moves = {{-1,0},{0,-1},{1,0},{0,1}};
        function<void()> bfs = [&](){
            queue<pair<int,int>> q;
            q.push({sx,sy});
            while(q.empty()==false){
                int x = q.front().first,y=q.front().second;
                q.pop();
                for(auto it:moves){
                    int cx = x+it.first,cy=y+it.second;
                    if(isvalid(cx,cy)){
                        q.push({cx,cy});
                        a[cx][cy].first='#';
                        if(it.first==0 && it.second==-1) a[cx][cy].second = 'L';
                        else if(it.first==0 && it.second==1) a[cx][cy].second = 'R';
                        else if(it.first==1 && it.second==0) a[cx][cy].second = 'D';
                        else if(it.first==-1 && it.second==0) a[cx][cy].second = 'U';
                    }
                }
            }
        };

        bfs();
        if(a[dx][dy].first=='B'){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        int cx = dx,cy=dy;
        string ans="";
        while(cx!=sx || cy!=sy){
            if(a[cx][cy].second =='L'){
                ans+='L';
                cy+=1;
            }
            else if(a[cx][cy].second =='R'){
                ans+='R';
                cy-=1;
            }
            else if(a[cx][cy].second =='U'){
                ans+='U';
                cx+=1;
            }
            else if(a[cx][cy].second =='D'){
                ans+='D';
                cx-=1;
            }
        }
        cout<<ans.size()<<"\n";
        reverse(ans.begin(),ans.end());
        cout<<ans<<"\n";        
    }
    return 0;
}