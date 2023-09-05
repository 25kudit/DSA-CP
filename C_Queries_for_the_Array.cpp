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
        int n = s.size(),f=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                if(st.size()==0){
                    st.push('s');
                    continue;
                }
                char tp = st.top();
                if(tp =='x')st.push('x');
                if(tp =='s')st.push('x');
                if(tp =='u')st.push('u');
            }
            if(s[i]=='-'){
                if(st.size()==0){
                    f=1;
                    break;
                }
                char tp = st.top();
                st.pop();
            }
            if(s[i]=='1'){
                if(st.size()==0)continue;
                char tp = st.top();
                if(tp=='u'){
                    f=1;
                    break;
                }
                int k=0;
                while(st.size()>0 && st.top()!='s'){
                    k++;
                    st.pop();
                }
                for(int x=0;x<k;x++)st.push('s');
            }
            if(s[i]=='0'){
                if(st.size()<2){
                    f=1;
                    break;
                }
                char tp = st.top();
                if(tp=='s'){
                    f=1;
                    break;
                }
                st.pop();
                st.push('u');
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}