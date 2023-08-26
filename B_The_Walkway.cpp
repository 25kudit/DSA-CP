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
        int n,m,d;
        cin>>n>>m>>d;
        vector<int> v(m+2);
        v[0]=1,v[m+1]=n+1;
        for(int i=1;i<=m;i++)cin>>v[i];
        int res=0;
        for(int i=0;i<=m;i++){
            res+=(v[i+1]-v[i]+d-1)/d;
        }
        int mx=0,cnt=0,curr=0;
        for(int i=1;i<=m;i++){
            curr= (v[i]-v[i-1]+d-1)/d + (v[i+1]-v[i]+d-1)/d - (v[i+1]-v[i-1]+d-1)/d;
            if(curr==mx)cnt++;
            else if(curr>mx){
                mx=curr;
                cnt=1;
            }
        }
        cout<<res-mx<<" "<<cnt<<"\n";


    }
    return 0;
}