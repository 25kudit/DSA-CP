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
        cin >> n;
        vector<int> a(n),pre(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        int x0=0,x1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')x0^=a[i];
            else x1^=a[i];
        }
        pre[0]=a[0];
        for(int i=1;i<n;i++)pre[i]=pre[i-1]^a[i];
        int q;
        cin>>q;
        while(q--){
            int k;
            cin>>k;
            if(k==1){
                int l,r;
                cin>>l>>r;
                l--;r--;
                int xr=0;
                xr = pre[r];
                if(l>0)xr^=pre[l-1];
                x1^=xr;
                x0^=xr;
            }
            else{
                int x;
                cin>>x;
                if(x==1)cout<<x1<<" ";
                else cout<<x0<<" ";
            }

        }
        cout<<"\n";

    }
    return 0;
}