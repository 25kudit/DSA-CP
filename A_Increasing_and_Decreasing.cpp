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
        int x,y,n;
        cin>>x>>y>>n;
        vector<int> res(n);
        res[0]=x;res[n-1]=y;
        int it = 1;
        for(int i=n-2;i>=0;i--){
            res[i]=res[i+1]-it;
            it++;
        }
        if(x>res[0])cout<<-1<<"\n";
        else {
            cout<<x<<" ";
            for(int i=1;i<n;i++)cout<<res[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}