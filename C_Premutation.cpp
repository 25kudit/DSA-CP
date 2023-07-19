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
        int n;
        cin>>n;
        vector<vector<int>> pn(n+1,vector<int> (n,0));
        for(int i=1;i<=n;i++)
            for(int j=1;j<n;j++)
                cin>>pn[i][j];
        vector<int> freq(n+1,0);
        for(int i=1;i<=n;i++)freq[pn[i][1]]++;
        int temp,ans;
        for(int i=1;i<=n;i++){
            if(freq[i] == n-1)ans=i;
            else if(freq[i]==1)temp=i;
        }
        // cout<<"*\n";
        int ind;
        for(int i=1;i<=n;i++)
            if(pn[i][1]==temp)
                ind=i;
        cout<<ans<<" ";
        for(int i=1;i<n;i++)cout<<pn[ind][i]<<" ";
        cout<<"\n";
        
        
    }
    return 0;
}