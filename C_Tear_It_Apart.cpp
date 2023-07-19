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
        string s;
        cin>>s;
        int n = s.size();
        vector<vector<int>> ind(26);
        for(int i=0;i<26;i++)ind[i].push_back(-1);
        for(int i=0;i<n;i++){
            ind[s[i]-'a'].push_back(i);
        }
        for(int i=0;i<26;i++)ind[i].push_back(n);
        int mn = INT_MAX;
        for(int i=0;i<26;i++){
            int mx = 0;
            for(int j=0;j<ind[i].size()-1;j++){
                mx=max(mx,(int)(log2(ind[i][j+1]-ind[i][j]-1)+1));
            }
            mn=min(mn,mx);
        }
        cout<<mn<<"\n";

    }
    return 0;
}