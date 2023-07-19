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
        unordered_map<int,int>  freq;
        for(int i=0;i<200005;i++)freq[i]=0;
        int n;
        cin>>n;
        vector<int> a[n];
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            while(k--){
                int t;
                cin>>t;
                a[i].push_back(t);
                freq[t]++;
            }
        }
        int fl = 0;
        for(auto it:a){
            int f=0;
            for(int i :it){
                if(freq[i]<2){
                    f=1;
                    break;
                }
            }
            if(!f){
                fl=1;
                break;
            }
        }
        if(!fl)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}