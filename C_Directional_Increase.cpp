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
        int n,ts=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i],ts+=a[i];
        if(ts!=0){
            cout<<"NO\n";
            continue;
        }
        int sum=0,f=0;
        int it=n-1;
        while(a[it]==0)it--;
        // cout<<it<<"\n";
        // return 0;

        for(int i=it;i>0;i--){
            if(sum+a[i]>=0){
                f=1;
                break;
            }
            else{
                sum+=a[i];
            }
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}