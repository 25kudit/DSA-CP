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
    vector<vector<int>> pre(200009,vector<int> (32,0));
    for(int i=1;i<200009;i++){
        for(int j=0;j<32;j++){
            if(i&(1<<j))pre[i][j]=pre[i-1][j]+1;
            else pre[i][j]=pre[i-1][j];
        }
    }
    while (T--)
    {
        int l,r;
        cin>>l>>r;
        vector<int> tmp(32,0);
        for(int i=0;i<32;i++){
            tmp[i]=pre[r][i]-pre[l-1][i];
        }
        int mx=0;
        for(int i=0;i<32;i++)mx=max(mx,tmp[i]);
        cout<<(r-l+1)-mx<<"\n";
    }
    return 0;
}