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
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int f=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO\n";
            continue;
        }
        for(int i=2;i<=n/2;i++){
            vector<int> temp(i,0);
            for(int k=0;k<n;k++){
                temp[a[k]%i]++;
            }
            if(*min_element(temp.begin(),temp.end())>=2){
                f=1;
                break;
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}