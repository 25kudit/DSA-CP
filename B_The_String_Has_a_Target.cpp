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
        string s;
        cin>>s;
        int mxd=-99,ind=-1;
        for(int i=n-1;i>=0;i--){
            if(s[0]-s[i]>mxd){
                mxd=s[0]-s[i];
                ind =i;
            }
        }
        cout<<s[ind];
        for(int i=0;i<n;i++){
            if(i==ind)continue;
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}