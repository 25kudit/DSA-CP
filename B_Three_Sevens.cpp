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
        int days;
        cin>>days;
        map<int,set<int>> mp;
        for(int x=1;x<=days;x++){
            int n;
            cin>>n;
            while(n--){
                int t;
                cin>>t;
                mp[t].insert(x);
            }
        }
        vector<int> res(days,-1);
        for(auto it :mp){
            int temp = *it.second.rbegin();
            if(temp<=days)
                res[temp-1]=it.first;
        }
        int f=0;
        for(int i=0;i<days;i++)
            if(res[i]==-1){
                f=1;
                break;
            }
        if(f)cout<<-1<<"\n";
        else {
            for(auto it:res)cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}