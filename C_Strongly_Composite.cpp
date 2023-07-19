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
// int cnt[20000007];
void primef(int n,map<int,int>& cnt)
{
    while (n % 2 == 0)
    {
        cnt[2]++;
        n = n/2;
    }
 

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cnt[i]++;
            n = n/i;
        }
    }
 
    if (n > 2)
        cnt[n]++;
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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            primef(a[i],mp);
        }
        int ans=0;
        for(auto &it:mp){
            ans+=it.second/2;
            it.second%=2;
        }
        
        int t=0;
        for(auto it :mp)
            t+=it.second;
        
        ans+=t/3;
        cout<<ans<<"\n";

        
    }
    return 0;
}