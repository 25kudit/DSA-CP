#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
        cin >> n;
        set<int> st;
        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                st.insert(i);
                n/=i;
                break;
            }
        }
        for(int i=2;i*i<=n;i++){
            if(n%i == 0 && st.find(i)==st.end()){
                st.insert(i);
                n/=i;
                break;
            }
        }
        st.insert(n);
        if(st.size()<=2)cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(auto it:st)cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}