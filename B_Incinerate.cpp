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
        vector<int> h(n),p(n);
        for(int i=0;i<n;i++)cin>>h[i];
        for(int i=0;i<n;i++)cin>>p[i];
        set<pair<int,int>> st;
        for(int i=0;i<n;i++){
            st.insert({p[i],h[i]});
        
        }
        deque<pair<int,int>> dq;
        for(auto it : st)
        {   dq.push_back(it);
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        // cout<<"\n";
        // continue;
        int damage=k;
        while(k>0 && dq.size()>0){
            while(dq.front().second <= damage && dq.size()>0){
                dq.pop_front();
                // cout<<damage<<" "<<dq.front().second<<" "<<dq.front().first<<"\n";
            }
            if(dq.size()==0)break;
            k-=dq.front().first;
            damage+=k;
        }
        // cout<<k<<"\n";
        if(k<=0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}