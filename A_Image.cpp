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
        map<char,int> um;
        string a,b;
        cin>>a>>b;
        um[a[0]]++;
        um[a[1]]++;
        um[b[0]]++;
        um[b[1]]++;
        if(um.size()==4){
            cout<<3<<"\n";
            continue;
        }
        if(um.size()==1){
            cout<<0<<"\n";
            continue;
        }
        if(um.size()==3){
            cout<<2<<"\n";
            continue;
        }
        cout<<1<<"\n";
    }
    return 0;
}