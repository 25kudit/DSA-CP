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
        int n = s.size();
        if(n<=2){
            reverse(s.begin(),s.end());
            cout<<s<<"\n";
            continue;
        }
        unordered_set<char> st;
        for(auto it : s)st.insert(it);
        if(st.size()==1){
            cout<<s<<"\n";
            continue;
        }
        if(st.size()==2){
            
        }
        vector<char> ans(n,'$');
        sort(s.begin(),s.end());
        int f=0,i,it=0;
        for(i=0;i<n-1;i+=2){
            if(s[i]==s[i+1]){
                ans[it]=s[i];
                ans[n-it-1]=s[i];
            }
            else{
                ans[it]=max(s[i],s[i+1]);
                ans[n-it-1]=min(s[i],s[i+1]);
                f=1;
                break;
            }
            it++;
        }
        // cout<<f<<"\n";
        if(f){
            i+=2;
            it++;
        }

        for(;i<n;i++){
            ans[it]=s[i];
            it++;
        }
        for(auto it :ans)cout<<it;
        cout<<"\n";
    }
    return 0;
}