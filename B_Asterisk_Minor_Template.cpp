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
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        string ans ="";
        if(a[0]==b[0]){
            ans+=a[0];
            ans+='*';
            cout<<"YES\n"<<ans<<"\n";
            continue;
        }
        if(a[n-1]==b[m-1]){
            ans+='*';
            ans+=a[n-1];
            cout<<"YES\n"<<ans<<"\n";
            continue;
        }
        set<string> st;
        for(int i=0;i<n-1;i++){
            string temp="";
            temp+=a[i];
            temp+=a[i+1];
            st.insert(temp);
        }
        for(int i=0;i<m-1;i++){
            string temp="";
            temp+=b[i];
            temp+=b[i+1];
            if(st.find(temp)!=st.end()){
                ans+='*';
                ans+=temp;
                ans+='*';
                break;
            }
        }
        if(ans=="")cout<<"NO\n";
        else cout<<"YES\n"<<ans<<"\n";

    }
    return 0;
}