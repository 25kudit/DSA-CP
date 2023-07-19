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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        // sort(a.begin(),a.end());
        int ans=INT_MAX;
        for(int i=0;i<=mn;i++){
            int j=1,mn=INT_MAX,mx=INT_MIN;
            for(int k=0;k<n;k++){
                while(j<x && a[k]/j>i)j++;
                if(a[k]/j < i)j--;
                mn=min(mn,a[k]/j);
                mx=max(mx,a[k]/j);
            }
            ans =min(ans,mx-mn);
        }
        cout<<ans<<"\n";
    }
    return 0;
}