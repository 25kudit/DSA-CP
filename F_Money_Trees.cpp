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
        vector<int> a(n),h(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>h[i];
        vector<int> pre(n,0),suflen(n,0),prelen(n,0);
        pre[0]=a[0];
        suflen[n-1]=1;
        prelen[0]=1;
        for(int i=1;i<n;i++)pre[i]=pre[i-1]+a[i];
        for(int i=n-2;i>=0;i--){
            if(h[i]%h[i+1] == 0)suflen[i]=suflen[i+1]+1;
            else suflen[i]=1;
        }
        for(int i=1;i<n;i++){
            if(h[i-1]%h[i] == 0) prelen[i]=prelen[i-1]+1;
            else prelen[i]=1;
        }

        auto isgood = [&](int lg){
            for(int i=0;i<n;i++){
                if(prelen[i]>=lg){
                    int l = i-min(lg,prelen[i])+1,r=i;
                    int curr=pre[r];
                    if(l>0)curr-=pre[l-1];
                    if(curr<=k)return true;
                }
            }
            for(int i=0;i<n;i++){
                if(suflen[i]>=lg){
                    int l = i,r=i+suflen[i]-1;
                    int curr=pre[r];
                    if(l>0)curr-=pre[l-1];
                    if(curr<=k)return true;
                }
            }
            return false;
        };

        int low = 0,high = n,ans=0;
        while(low<=high){
            int mid = (low+high)/2;
            if(isgood(mid)){
                ans =mid;
                low = mid+1;
            }
            else high = mid-1;

        }
        cout<<ans<<"\n";
    }
    return 0;
}