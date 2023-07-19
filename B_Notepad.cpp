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
        set<string> st;
        int f=0;
        for(int i=1;i<n-1;i+=1){
            string t ="";
            t+=s[i];
            t+=s[i+1];
            if(st.find(t)!=st.end()){
                f=1;
                break;
            }
            string t2="";
            t2+=s[i-1];
            t2+=s[i];
            st.insert(t2);
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}