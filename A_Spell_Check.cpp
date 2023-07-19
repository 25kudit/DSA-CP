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
        if(n!=5){
            cout<<"NO\n";
            continue;
        }
        set<char> st;
        for(auto it:s)st.insert(it);
        string t="Timur";
        int f=0;
        for(auto it:t){
            if(st.find(it)==st.end()){
                f=1;
                continue;
            }
        }
        if(f){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }
    return 0;
}