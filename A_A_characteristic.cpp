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
        int n,k;
        cin>>n>>k;
        int f =0,cnt=0;
        for(int i=0;i<=n;i++){
            int a = i,b=n-i;
            int t = (a*(a-1) + b*(b-1))/2;
            if(t==k){
                cnt = i;
                f=1;
                break;
            }
        }
        if(f ==0)cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                if(i<cnt)cout<<1<<" ";
                else cout<<-1<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}