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
        string s1,s2;
        cin>>s1>>s2;
        int diff=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])diff++;
        }
        // cout<<diff;
        int t,q;
        cin>>t>>q;
        queue<int> dur;
        for(int i=0;i<t;i++)dur.push(-1);
        while(q--){
            int pos = dur.front();
            dur.pop();
            if(pos!=-1){
                if(s1[pos]!=s2[pos])diff++;
            }
            int type;
            cin>>type;
            if(type==1){
                int p;
                cin>>p;
                p--;
                if(s1[p]!=s2[p])diff--;
                dur.push(p);
            }
            else if(type==2){
                int n1,p1,n2,p2;
                cin>>n1>>p1>>n2>>p2;
                p1--,p2--;
                if(s1[p1]!=s2[p1])diff--;
                if(s1[p2]!=s2[p2])diff--;
                
                if(n1==1){
                    if(n2==2)swap(s1[p1],s2[p2]);
                    else swap(s1[p1],s1[p2]);
                }
                else{
                    if(n2==2)swap(s2[p1],s2[p2]);
                    else swap(s2[p1],s1[p2]);
                }

                if(s1[p1]!=s2[p1])diff++;
                if(s1[p2]!=s2[p2])diff++;
                dur.push(-1);
            }
            else{
                if(diff>0)cout<<"NO\n";
                else cout<<"YES\n";
                dur.push(-1);
            }
        }
    }
    return 0;
}