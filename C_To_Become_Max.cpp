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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int res = *max_element(a.begin(),a.end());

        auto isgood=[&](int mid,int ind){
            int req = 0;
            for(int i=ind;i<n-1;i++){
                if(a[i]<mid){
                    req+=(mid-a[i]);
                    mid--;
                }
                else return req<=k;
            }
            if(mid<=a[n-1])return req<=k;
            return false;
        };


        auto findmx =[&](int nos,int ind){
            int l=nos,r=1e9,ans=nos;
            while(l<=r){
                int m= (l+r)/2;
                if(isgood(m,ind)){
                    ans=m;
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            return ans;
        };

        for(int i=0;i<n-1;i++){
            res=max(res,findmx(a[i],i));
        }
        cout<<res<<"\n";
    }
    return 0;
}