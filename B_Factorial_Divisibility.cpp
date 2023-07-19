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
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t!=k)mp[t]++;
        }
        if(mp.size()==0){
            cout<<"Yes\n";
            continue;
        }
        int mx = (*mp.rbegin()).first,f=0;
        // cout<<mx<<"\n";
        for(int i=1;i<k;i++){
            if(mp[i]%(i+1)){
                // cout<<i;
                f=1;
                break;
            }
            else{
                mp[i+1]+=mp[i]/(i+1);
                // cout<<i<<" "<<mp[i]<<"\n";
            }
        }
        // cout<<mp[4];
        mx = (*mp.rbegin()).first;
        if(f==0 && mx==k)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}