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
        int sz= (n*(n-1))/2;
        vector<int> a(sz);
        map<int,int> freq;
        for(int i=0;i<sz;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        vector<int> res(n);
        int cnt=0;
        for(auto it : freq){
            int k = it.second;
            while(k){
                res[cnt]=it.first;
                k-=(n-cnt-1);
                cnt++;
            }
            
        }
        while(cnt<n){
            res[cnt]=res[cnt-1];
            cnt++;
        }
        for(auto it : res)cout<<it<<" ";
        cout<<"\n";


    }
    return 0;
}