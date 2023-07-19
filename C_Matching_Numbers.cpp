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
        if(n%2==0){
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
        if(n==1){
            cout<<1<<" "<<2<<"\n";
            continue;
        }
        int it= 2*n-(n/2+1),f=0;
        vector<pair<int,int>> vp;
        for(int i=2;i<=n;i+=2){
            vp.push_back({i,it-i});
            // cout<<i<<" "<<it-i<<"\n";
            if( it-i>2*n || i==it-i){
                f=1;
                break;
            }
            it++;
        }
        for(int i=1;i<=n;i+=2){
            vp.push_back({i,it-i});
            // cout<<i<<" "<<it-i<<"\n";
            if(f==1||it-i>2*n || i==it-i){
                f=1;
                break;
            }
            it++;
        }
        
        // cout<<f<<"&\n";
        if(!f){
            for(int i=0;i<n;i++)cout<<vp[i].first<<" "<<vp[i].second<<"\n";
            continue;
        }
        f=0;
        vp.clear();
        it = 2*n-(n/2-1);
        for(int i=1;i<=n;i+=2){
            vp.push_back({i,it-i});
            // cout<<i<<" "<<it-i<<"\n";
            if(it-i>2*n || i==it-i){
                f=1;
                break;
            }
            it++;
        }
        for(int i=2;i<=n;i+=2){
            vp.push_back({i,it-i});
            // cout<<i<<" "<<it-i<<"\n";
            if( f==1|| it-i>2*n || i==it-i){
                f=1;
                break;
            }
            it++;
        }
        if(!f){
            for(int i=0;i<n;i++)cout<<vp[i].first<<" "<<vp[i].second<<"\n";
            continue;
        }

    }
    return 0;
}