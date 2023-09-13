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
        vector<int> a(n);
        int tot=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tot+=a[i];
        }
        if(tot%n){
            cout<<"No\n";
            continue;
        }
        map<int,pair<int,int>> mp;
        for(int i=0;i<32;i++){
            for(int j=0;j<32;j++){
                mp[(1<<i)-(1<<j)]={i,j};
            }
        }
        int tar = tot/n,f=0;
        vector<int> cnt(32,0);
        for(int i=0;i<n;i++){
            int req = a[i]-tar;
            if(mp.find(req)==mp.end()){
                f=1;
                break;
            }
            int give = mp[req].second,take = mp[req].first;
            cnt[give]++;
            cnt[take]--;
        }
        for(int i=0;i<32;i++){
            if(cnt[i]!=0){
                f=1;
                break;
            }
        }
        if(f)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}