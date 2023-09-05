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
        string a,b;
        cin>>a>>b;
        int n = a.size();
        vector<bool> pre(n,0),suf(n,0);
        pre[0]=1;suf[n-1]=1;
        for(int i=1;i<n;i++){
            if(a[i]==b[i]){
                if(a[i]=='0')pre[i]=1;
                else pre[i]=pre[i-1];
            }
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]==b[i]){
                if(a[i]=='1')suf[i]=1;
                else suf[i]=suf[i+1];
            }
        }
        int f=0;
        for(int i=0;i<=n-2;i++){
            if(pre[i]==1 && suf[i+1]==1){
                f=1;
                break;
            }
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
        

    }
    return 0;
}