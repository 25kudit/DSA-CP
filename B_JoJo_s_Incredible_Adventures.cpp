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
        int n = s.size(),cr=0,mx = INT_MIN,f=0;
        s+=s;
        for(int i=0;i<2*n;i++){
            if(s[i]=='1')cr++;
            else{
                mx=max(mx,cr);
                cr=0;
                f=1;
            }
        }
        if(!f){
            cout<<n*n<<"\n";
            continue;
        }
        mx=max(mx,cr);
        mx=min(mx,n);
        int ans=mx;
        for(int i=1;i<=mx;i++){
            ans=max(ans,(i+1)*(mx-i));
        }
        cout<<ans<<"\n";
    }
    return 0;
}