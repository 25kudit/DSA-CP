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
        string s;
        cin>>s;
        int f=0;
        if(s[0]!='Y' && s[0]!='e' && s[0]!='s'){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!='Y' && s[i]!='e' && s[i]!='s'){
                f=1;
                break;
            }
            if(s[i]=='Y' && s[i+1]!='e')f=1;
            else if(s[i]=='e' && s[i+1]!='s')f=1;
            else if (s[i]=='s' && s[i+1]!='Y')f=1;
        }
        int n= s.size()-1;
        if(s[n]!='Y' && s[n]!='e' && s[n]!='s'){
            cout<<"NO\n";
            continue;
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}