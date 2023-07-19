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
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> ans(n+1);
        int f=0;
        for(int i=1;i<=n;i++){
            if(l%i==0){
                ans[i]=l;
                continue;
            }
            int t=l/i;
            t*=i;
            t+=i;
            if(t>r){
                f=1;
                break;
            }
            ans[i]=t;
        }
        if(f)cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}