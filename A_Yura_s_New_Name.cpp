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
        int n = s.size(),cr=0,ans=0;
        if(n==1 && s[0]=='^'){
            cout<<1<<"\n";
            continue;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='_')cr++;
            else{
                ans+=max((int)0,cr-1);
                cr=0;
            }
        }
        ans+=max((int)0,cr-1);
        ans+=s[0]=='_';
        ans+=s[n-1]=='_';
        cout<<ans<<"\n";
    }
    return 0;
}