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
        int neg=0,pos =0;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t<0)neg++;
            else pos++;
        }
        for(int i=1;i<=n;i++){
            if(i<=pos)cout<<i<<" ";
            else cout<<i-2*(i-pos)<<" ";
        }
        cout<<"\n";
        for(int i=1;i<=n;i++){
            if(i%2){
                if(neg>=i/2)cout<<1<<" ";
                else cout<<i-2*neg<<" ";
            }
            else{
                if(neg>=i/2)cout<<0<<" ";
                else cout<<i-2*neg<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}