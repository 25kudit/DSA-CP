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
        vector<int> pos(n+1);
        for(int i=1;i<=n;i++){
            int t;
            cin>>t;
            pos[t]=i;
        }
        int st = (n+1)/2;
        int en = (n+2)/2;
        while(st>0 && en<=n && (st==en || (pos[st]<pos[st+1] && pos[en]>pos[en-1]))){
            st--;
            en++;
        }
        cout<<(st+n-en+1)/2<<"\n";
        
        

    }
    return 0;
}