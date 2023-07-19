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

int luck(int k){
    int mxd=0,mnd=9;
    while(k>0){
        int d=k%10;
        mxd=max(mxd,d);
        mnd=min(mnd,d);
        k/=10;
    }
    return mxd-mnd;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int l,r;
        cin>>l>>r;
        int ans,mxl=-1;
        for(int i=l;i<=min(r,l+100);i++){
            int t = luck(i);
            if(t>mxl){
                mxl=t;
                ans=i;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}