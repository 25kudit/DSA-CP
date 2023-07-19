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
        string s;
        cin>>s;
        int it=0,prev=0;
        while((s[it]=='m'||s[it]=='M') && it<n)it++;
        if(it == prev){
            cout<<"NO\n";
            continue;
        }
        prev=it;
        while((s[it]=='e'||s[it]=='E') && it<n)it++;
        if(it == prev){
            cout<<"NO\n";
            continue;
        }
        prev=it;
        while((s[it]=='o'||s[it]=='O') && it<n)it++;
        if(it == prev){
            cout<<"NO\n";
            continue;
        }
        prev=it;
        while((s[it]=='w'||s[it]=='W') && it<n)it++;
        if(it == prev){
            cout<<"NO\n";
            continue;
        }
        if(it!=n)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}