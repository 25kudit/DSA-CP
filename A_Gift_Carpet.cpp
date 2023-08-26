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
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        if(m<4){
            cout<<"NO\n";
            continue;
        }
        string temp = "vika";
        int it=0,f=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[j][i]==temp[it]){
                    it++;
                    break;
                }
            }
            if(it==4){
                f=1;
                break;
            }
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}