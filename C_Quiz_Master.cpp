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

int maxm=1e5+10;
vector<vector<int>> factors(maxm);


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1;i<maxm;i++){
        for(int j=i;j<maxm;j+=i)
            factors[j].push_back(i);
    }
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> freq(m+1,0);
        int cnt=0,mndiff=INT_MAX,j=0;
        for(int i=0;i<n;i++){
            for(auto it:factors[a[i]]){
                if(it>m)continue;
                if(freq[it]==0)cnt++;
                freq[it]++;
            }
            while(cnt==m){
                mndiff=min(mndiff,a[i]-a[j]);
                for(auto it : factors[a[j]]){
                    if(it>m)continue;
                    freq[it]--;
                    if(freq[it]==0)cnt--;
                }
                j++;
            }

        }
        if(mndiff==INT_MAX)cout<<-1<<"\n";
        else cout<<mndiff<<"\n";
        
        
    }
    return 0;
}