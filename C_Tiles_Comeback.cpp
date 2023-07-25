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
        if(a[0]==a[n-1]){
            int cnt=2;
            for(int i=1;i<n-1;i++)
                if(a[i]==a[0])cnt++;
            
            if(cnt>=k)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else {
            vector<int> cnt1(n,0),cnt2(n,0);
            cnt1[0]=1,cnt2[n-1]=1;
            for(int i=1;i<n;i++){
                cnt1[i]=cnt1[i-1];
                if(a[i]==a[0])cnt1[i]++;
            }
            for(int i=n-2;i>=0;i--){
                cnt2[i]=cnt2[i+1];
                if(a[i]==a[n-1])cnt2[i]++;
            }
            int f=0;
            for(int i=0;i<n;i++){
                if(cnt1[i]>=k && cnt2[i]>=k){
                    f=1;
                    break;
                }
            }
            if(f)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}