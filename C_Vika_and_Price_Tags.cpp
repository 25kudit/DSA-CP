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

int help(int a,int b){
    if(a==0)return 0;
    if(b==0)return 1;
    if(b>2*a)b=b%(2*a);
    return 1+help(b,abs(a-b));
}

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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        set<int> cnt;
        for(int i=0;i<n;i++){
            if(a[i]!=0 || b[i]!=0){
                cnt.insert(help(a[i],b[i])%3);
            }
        }
        if(cnt.size()>1)cout<<"NO\n";
        else cout<<"YES\n";
        
    }
    return 0;
}