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

bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.first==b.first)return a.second<b.second;
    return a.first>b.first;
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
        vector<pair<int,int>> pq;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t%k)pq.push_back({t%k,i});
            else pq.push_back({k,i});
        }
        sort(pq.begin(),pq.end(),cmp);
        for(int i=0;i<n;i++)
            cout<<pq[i].second+1<<" ";
        cout<<"\n";


    }
    return 0;
}