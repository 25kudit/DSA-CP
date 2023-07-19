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

int help(vector<int> vc,int n){
    int prev=-1;
    vc.push_back(n);
    priority_queue<int> diff;
    for(int i=0;i<vc.size();i++){
        diff.push(vc[i]-prev-1);
        prev=vc[i];
    }
    int mx=diff.top();
    diff.pop();
    diff.push((mx)/2);
    return diff.top();
}

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
        map<int,vector<int>> mp;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        int mn=INT_MAX;
        for(auto vc : mp){
            mn=min(mn,help(vc.second,n));
        }
        cout<<mn<<"\n";

    }
    return 0;
}