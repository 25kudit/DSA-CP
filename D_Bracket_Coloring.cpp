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
        int co=0,cl=0;
        for(auto it : s){
            if(it=='(')co++;
            else cl++;
        }
        if(co!=cl){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> ans(n),temp;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(i);
            else{
                if(st.size()>0){
                    ans[st.top()]=1;
                    ans[i]=1;
                    st.pop();
                }
                else temp.push_back(i);
            }
        }
        while(st.size()>0){
            ans[st.top()]=2;
            st.pop();
        }
        for(auto it : temp)ans[it]=2;
        int c1=0,c2=0;
        for(auto it : ans){
            if(it == 1)c1++;
            else c2++;
        }
        // cout<<"h1";
        if(c1==n || c2==n){
            cout<<1<<"\n";
            for(int i=0;i<n;i++)cout<<1<<" ";
            cout<<"\n";
            continue;
        }
        while(!st.empty())st.pop();
        reverse(s.begin(),s.end());
        temp.clear();
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(n-1-i);
            else{
                if(st.size()>0){
                    ans[st.top()]=1;
                    ans[n-1-i]=1;
                    st.pop();
                }
                else temp.push_back(n-1-i);
            }
        }
        while(st.size()>0){
            ans[st.top()]=2;
            st.pop();
        }
        for(auto it : temp)ans[it]=2;
        for(auto it : ans){
            if(it == 1)c1++;
            else c2++;
        }
        if(c1==n || c2==n){
            cout<<1<<"\n";
            for(int i=0;i<n;i++)cout<<1<<" ";
            cout<<"\n";
            continue;
        }
        
        cout<<2<<"\n";
        for(auto it : ans)cout<<it<<" ";
        
        cout<<"\n";

    }
    return 0;
}