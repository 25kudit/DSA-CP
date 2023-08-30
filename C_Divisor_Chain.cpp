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
        int k;
        cin>>k;
        vector<int> res;
        // cout<<(1<<((int)log2(k)));
        int it=0,temp = (1<<((int)log2(k))),x=0;
        while((1<<it)<temp){
            if(k & (1<<it)){
                res.push_back(k-x);
                x+=(1<<it);
            }
            it++;
        }
        while(temp){
            res.push_back(temp);
            temp>>=1;
        }
        cout<<res.size()<<"\n";
        for(auto it : res)cout<<it<<" ";
        cout<<"\n";
        
    }
    return 0;
}