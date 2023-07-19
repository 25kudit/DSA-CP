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

bool cmp(vector<int> &a,vector<int> &b){
    if(a[0]==b[0]){
        if(a[1]==b[1])return a[2]<b[2];
        return a[1]<b[1];
    }
    return a[0]>b[0];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,m,t;
        cin>>n>>m>>t;
        vector<vector<int>> v(n,vector<int> (m)),res(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(),v[i].end());
        }
        for(int i=0;i<n;i++){
            int curr=0;
            for(int j=0;j<m;j++){
                curr+=v[i][j];
                if(curr<=t)res[i].push_back(v[i][j]);
                else break;
            }
        }
        vector<vector<int>> rank(n);
        for(int i=0;i<n;i++){
            int pel=0;
            // reverse(res[i].begin(),res[i].end());
            vector<int> temp(res[i].size());
            for(int j=0;j<res[i].size();j++){
                if(j==0)temp[j]=res[i][j];
                else temp[j]=temp[j-1]+res[i][j];
            }
            for(int j=0;j<res[i].size();j++)pel+=temp[j];
            rank[i]={res[i].size(),pel,i+1};
        }
        sort(rank.begin(),rank.end(),cmp);
        int f=-1;
        for(int i=0;i<n;i++){
            // cout<<rank[i][0]<<" "<<rank[i][1]<<" "<<rank[i][2]<<"\n";
            if(rank[i][2]==1){
                f=i+1;
                break;
            }
        }
        cout<<f<<"\n";



    }
    return 0;
}