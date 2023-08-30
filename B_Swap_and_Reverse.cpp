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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k%2==0){
            sort(s.begin(),s.end());
            cout<<s<<"\n";
            continue;
        }
        priority_queue<char,vector<char>,greater<int>> ev,od;
        for(int i=0;i<n;i++){
            if(i%2)od.push(s[i]);
            else ev.push(s[i]);
        }
        string res="";
        for(int i=0;i<n;i++){
            if(i%2){
                res+=od.top();
                od.pop();
            }
            else {
                res+=ev.top();
                ev.pop();
            }
        }
        cout<<res<<"\n";

    }
    return 0;
}