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
        vector<int> v(n),ind(n+1,-1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            ind[v[i]]=i;
        }
        int mex=n;
        for(int i=0;i<=n;i++){
            if(ind[i]==-1){
                mex=i;
                break;
            }
        }
        k=k%(n+1);
        vector<int> res(n+1);
        res[k]=mex;
        for(int i=k+1;i<=n;i++)res[i]=v[i-k-1];
        for(int i=0;i<k;i++)res[i]=v[i+n-k];
        for(int i=1;i<=n;i++)cout<<res[i]<<" ";
        cout<<"\n";


    }
    return 0;
}