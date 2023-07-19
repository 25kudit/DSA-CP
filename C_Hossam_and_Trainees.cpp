#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int num = a[i];
            if(num%2 == 0){
                mp[2]++;
                while(num%2==0)num/=2;
            }
            for(int i=3;i<=sqrt(num);i+=2){
                if(num%i == 0){
                    mp[i]++;
                    while(num%i==0)num/=i;
                }
            }
            if(num>2)mp[num]++;
        }
        int f = 0;
        for(auto it: mp){
            if(it.second>1){
                f=1;
                break;
            }
        }
        if(!f)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}