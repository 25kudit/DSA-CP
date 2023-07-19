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
        char a,b,c,d,e,f,g,h,i;
        cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;

        auto checkd=[&](char x){
            if(a==e && e==i && i==x)return true;
            if(c==e && e==g && g==x)return true;
            return false;
        };
        auto checkh=[&](char x){
            if(a==b && b==c && c==x)return true;
            if(d==e && e==f && f==x)return true;
            if(g==h && h==i && i==x)return true;
            return false;
        };
        auto checkv=[&](char x){
            if(a==d && d==g && g==x)return true;
            if(b==e && e==h && h==x)return true;
            if(c==f && f==i && i==x)return true;
            return false;
        };
        if(checkd('O'))cout<<"O\n";
        else if(checkd('X'))cout<<"X\n";
        else if(checkd('+'))cout<<"+\n";
        else if(checkh('O'))cout<<"O\n";
        else if(checkh('X'))cout<<"X\n";
        else if(checkh('+'))cout<<"+\n";
        else if(checkv('O'))cout<<"O\n";
        else if(checkv('X'))cout<<"X\n";
        else if(checkv('+'))cout<<"+\n";
        else cout<<"DRAW\n";
    }
    return 0;
}