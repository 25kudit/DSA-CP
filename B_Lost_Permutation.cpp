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
        int m,s,mx=INT_MIN;
        cin>>m>>s;
        set<int> st;
        for(int i=0;i<m;i++){
            int t;
            cin>>t;
            mx=max(mx,t);
            st.insert(t);
        }
        int sum=0,it=1;
        
        while(sum<s){
            if(st.find(it)==st.end()){
                sum+=it;
                st.insert(it);
            }
            it++;
        }
        int f=0;
        for(int i=1;i<=mx;i++)
            if(st.find(i)==st.end()){
                f=1;
                break;
            }
            
        if(sum==s && f==0)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}