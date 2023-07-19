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
        if(n==3){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        if(n&1){
            for(int i=0;i<n;i++){
                if(i&1)cout<<(n-2)/2+1<<" ";
                else cout<<-(n-2)/2<<" ";
            }
            cout<<"\n";
        }
        else {
            for(int i=0;i<n;i+=2){
                cout<<1<<" "<<-1<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}