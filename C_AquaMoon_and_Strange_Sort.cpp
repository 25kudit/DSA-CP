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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end());
        map<int,set<int>> mpe,mpo;
        for(int i=0;i<n;i++){
            if(i%2)mpo[b[i]].insert(i);
            else mpe[b[i]].insert(i);
        }
        // for(auto it : mp){
        //     for(auto i : it.second)cout<<it.first<<" "<<i<<" ";
        //     cout<<"\n";
        // }
        // cout<<"\n&\n";
        // continue;
        int fl=0;
        for(int i=0;i<n;i++){
            int f=0;
            if(i%2){
                if(mpo[a[i]].size()==0){
                    fl=1;
                    break;
                }
                else{
                    mpo[a[i]].erase(mpo[a[i]].begin());
                }
            }
            else{
                if(mpe[a[i]].size()==0){
                    fl=1;
                    break;
                }
                else{
                    mpe[a[i]].erase(mpe[a[i]].begin());
                }
            }
            // for(auto it:mp[a[i]]){
            //     // cout<<i<<" "<<a[i]<<" "<<it<<"\n";
            //     if(abs(it-i)%2==0){
            //         mp[a[i]].erase(it);
            //         f=1;
            //         break;
            //     }
            // }
            // if(f==0){
            //     fl=1;
            //     break;
            // }
        }
        if(fl)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}