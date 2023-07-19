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
        int n,m,x1,y1,x2,y2;
        cin>>n>>m;
        cin>>x1>>y1>>x2>>y2;
        auto iscorner = [&](int x,int y){
            if((x==1 && y==1)||(x==1 && y==m)||(x==n && y==1) || (x==n && y==m))return true;
            return false;
        };
        auto isedge = [&](int x,int y){
            if(x==1 ||y==1 ||x==n ||y==m)return true;
            return false;
        };
        if(iscorner(x1,y1)||iscorner(x2,y2)){
            cout<<2<<"\n";
            continue;
        }
        else if(isedge(x1,y1)||isedge(x2,y2)){
            cout<<3<<"\n";
            continue;
        }
        cout<<4<<"\n";
    }
    return 0;
}