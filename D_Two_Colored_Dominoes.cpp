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
        vector<vector<char>> v(n,vector<char> (m,'.')),res(n,vector<char>(m,'.'));
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>v[i][j];
        int f=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(v[i][j]=='U')cnt++;
            }
            if(cnt%2){
                f=1;
                break;
            }
        }
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(v[j][i]=='L')cnt++;
            }
            if(cnt%2){
                f=1;
                break;
            }
        }
        if(f){
            cout<<-1<<"\n";
            continue;
        }
        int inv=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='U' ){
                    if(inv){
                        res[i][j]='B';
                        res[i+1][j]='W';
                    }
                    else{
                        res[i][j]='W';
                        res[i+1][j]='B';
                    }
                    inv=1-inv;
                }
            }
        }
        inv=0;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n;j++){
                if(v[j][i]=='L' ){
                    if(inv){
                        res[j][i]='B';
                        res[j][i+1]='W';
                    }
                    else{
                        res[j][i]='W';
                        res[j][i+1]='B';
                    }
                    inv=1-inv;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)cout<<res[i][j];
            cout<<"\n";
        }
    }
    return 0;
}