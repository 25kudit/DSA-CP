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
        vector<pair<int,int>> v1,v2;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            int aux=t;
            while(t%m==0){
                t/=m;
            }
            if(!v1.empty() && v1.back().first==t){
                v1.back().second+=aux/t;
            }
            else{
                v1.push_back({t,aux/t});
            }
        }
        cin>>n;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            int aux=t;
            while(t%m==0){
                t/=m;
            }
            if(!v2.empty() && v2.back().first==t){
                v2.back().second+=aux/t;
            }
            else{
                v2.push_back({t,aux/t});
            }
        }
        if(v1==v2)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}