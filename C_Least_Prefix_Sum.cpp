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
        vector<int> a(n);
        priority_queue<int> pq;
        int mn=0,cr=0,op=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i<m)
                mn+=a[i];
        }
        cr=mn;
        for(int i=m-1;i>0;i--){
            pq.push(a[i]);
            cr-=a[i];
            while(cr<mn){
                int t = pq.top();
                pq.pop();
                op++;
                mn-=2*t;
            }
        }
        multiset<int> ms;
        cr=mn;
        for(int i=m;i<n;i++){
            ms.insert(a[i]);
            cr+=a[i];
            while(cr<mn){
                int t = *ms.begin();
                ms.erase(ms.begin());
                cr-=2*t;
                op++;
            }
        }
        cout<<op<<"\n";



    }
    return 0;
}