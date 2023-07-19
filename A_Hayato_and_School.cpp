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
        vector<int> even,odd;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t%2)odd.push_back(i+1);
            else even.push_back(i+1);
        }
        if(odd.size()==0)cout<<"NO\n";
        else {
            if(odd.size()>=3)cout<<"YES\n"<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<"\n";
            else if(even.size()>=2)cout<<"YES\n"<<even[0]<<" "<<even[1]<<" "<<odd[0]<<"\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}