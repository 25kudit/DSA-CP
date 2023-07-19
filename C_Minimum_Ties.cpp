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
        if(n%2){
            int cnt= n/2;
            for(int i=1;i<=n;i++){
                int it=i+1;
                for(int j=1;j<=cnt && it<=n;j++){
                    cout<<1<<" ";
                    it++;
                }
                for(;it<=n;it++){
                    cout<<-1<<" ";
                }
            }
            cout<<"\n";
        }
        else{
            int cnt = n/2-1;
            for(int i=1;i<=n;i++){
                int it = i+1;
                for(int j=1;j<=cnt && it<=n;j++){
                    cout<<1<<" ";
                    it++;
                }
                if(it<=n){
                    cout<<0<<" ";
                    it++;
                }
                for(;it<=n;it++)cout<<-1<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}