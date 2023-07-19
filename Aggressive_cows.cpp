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
        int n,c;
        cin>>n>>c;
        vector<int> dist(n);
        for(int i=0;i<n;i++)cin>>dist[i];
        sort(dist.begin(),dist.end());

        auto isgood =[&](int mid){
            int cnt=1,prev=0;
            for(int i=1;i<n;i++){
                if(prev+dist[i]-dist[i-1]>=mid){
                    prev=0;
                    cnt++;
                }
                else prev+=(dist[i]-dist[i-1]);
            }
            return cnt>=c;

        };

        int l=0,h=INT_MAX,ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(isgood(mid)){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        cout<<ans<<"\n";

    }
    return 0;
}