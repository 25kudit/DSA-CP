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
        if(n&1){
            vector<int> ans(n);
            int it=n-n/2;
            for(int i=0;i<n;i++){
                ans[i]=it+2;
                it++;
            }
            ans[0]-=1;
            ans[n-1]+=1;
            ans[n-2]+=1;
            for(auto it:ans)cout<<it<<" ";
            cout<<"\n";
        }
        else{
            vector<int> ans(n);
            int it = n/2;
            for(int i=0;i<n;i++){
                ans[i]=it;
                it++;
                if(it==n)it++;
            }
            for(auto it: ans)cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}