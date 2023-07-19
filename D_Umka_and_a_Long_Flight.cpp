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

int fib(int n){
    if(n==1 || n==2 )return n;
    int a=2,b=1;
    for(int i=2;i<n;i++){
        int t=a+b;
        b=a;
        a=t;
    }
    return a;
}
bool check(int r,int c,int x ,int y){
    // cout<<r<<c<<x<<y<<"\n";
    if(r==1 && c==1)return true;
    if(r<c){
        if(y-r>0)
            return check(r,c-r,x,y-r);
        else if(c-y>=r)
            return check(r,c-r,x,y);
    }
    else{
        if(x-c>0)
            return check(r-c,c,x-c,y);
        else if(r-x>=c)
            return check(r-c,c,x,y);
    }
    return false;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,r,c;
        cin>>n>>r>>c;
        check(fib(n),fib(n+1),r,c)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}