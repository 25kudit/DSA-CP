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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int> first(n),last(n);
        int curr=s[0]-'0',prev=0;
        for(int i=0;i<n;i++){
            if(s[i]-'0'>=curr){
                first[i]=prev;
                curr=max(curr,(int)(s[i]-'0'));
            }
            else{
                first[i]=i;
                prev=i;
                curr=s[i]-'0';
            }
        }
        curr=s[n-1]-'0';
        prev=n-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]-'0'<=curr){
                last[i]=prev;
                curr=min(curr,(int)(s[i]-'0'));
            }
            else{
                last[i]=i;
                prev=i;
                curr=s[i]-'0';
            }
        }
        set<pair<int,int>> st;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            a--,b--;
            if(first[a]==first[b] && last[a]==last[b]){
                st.insert({-1,-1});
                continue;
            }
            else{
                int ca=a,cb=b;
                if(b==n-1 || s[b+1]=='1')cb=last[b];
                if(a==0 || s[a-1]=='0')ca=first[a];
                st.insert({ca,cb});
            }
        }
        cout<<st.size()<<"\n";
    }
    return 0;
}