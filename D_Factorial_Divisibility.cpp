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
    // cin >> T;
    while (T--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        // cout<<mp[(int)7]<<"%\n";
        // for(auto it:mp){
        //     if(it.first<it.second){
        //         cout<<it.first<<" "<<it.second<<"-1\n";
        //         mp[it.first]=(it.second%(it.first +1));
        //         mp[it.first +1 ]+=(it.second / (it.first+1));
        //         cout<<it.first<<" "<<it.second<<"-2\n";
        //     }
        // }
        for(auto it = mp.begin();it!=mp.end();it++){
            int nm = (*it).first, fr=(*it).second;
            if(fr > nm){
                mp[(*it).first] = (fr%(nm+1));
                mp[nm+1]+=(fr/(nm+1));
            }
        }
        int beg;
        for(auto it : mp){
            if(it.second !=0)beg= it.first;
        }
        if(x<=beg)cout<<"Yes\n";
        else cout<<"No\n";

        

    }
    return 0;
}