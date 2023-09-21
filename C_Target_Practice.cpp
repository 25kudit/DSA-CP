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
        int tot =0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                char c;
                cin>>c;
                if(c=='.')continue;
                int curr=0;
                if(i==5 || i==6 || j==5 || j==6)curr=5;
                if(i==4 || i==7 || j==4 || j==7)curr=4;
                if(i==3 || i==8 || j==3 || j==8)curr=3;
                if(i==2 || i==9 || j==2 || j==9)curr=2;
                if(i==1 || i==10 || j==1 || j==10)curr=1;
                tot+=curr;
            }
        }
        cout<<tot<<"\n";
    }
    return 0;
}