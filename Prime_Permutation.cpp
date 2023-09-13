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
        if(n<=3){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> res(n+1);
        for(int i=1;i+3<=n;i+=4){
            res[i]=i+2;
            res[i+2]=i;
            res[i+1]=i+3;
            res[i+3]=i+1;
        }
        if(n%4==1){
            res[n-4]=n-1;
            res[n-3]=n;
            res[n-2]=n-4;
            res[n-1]=n-3;
            res[n]=n-2;
        }
        if(n%4==2){
            res[n-5]=n-2;
            res[n-4]=n-1;
            res[n-3]=n;
            res[n-2]=n-5;
            res[n-1]=n-4;
            res[n]=n-3;
        }
        if(n%4==3){
            res[n-6]=n-4;
            res[n-5]=n-3;
            res[n-4]=n-2;
            res[n-3]=n-1;
            res[n-2]=n;
            res[n-1]=n-6;
            res[n]=n-5;
        }
        for(int i=1;i<=n;i++)cout<<res[i]<<" ";
        cout<<"\n";

    }
    return 0;
}