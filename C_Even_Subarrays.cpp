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

vector<int> sq;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = n * (n + 1) / 2;
        vector<int> b;
        for(int i=0;i*i<=2*n;i++)b.push_back(i*i); 
        vector<int> freq(2*n+100);
        int pre=0;
        freq[0]=1;
        for(int i=0;i<n;i++){
            pre=pre^a[i];
            for(auto it:b)
                if((it^pre)<freq.size())
                    ans-=freq[it^pre];
            freq[pre]++;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}