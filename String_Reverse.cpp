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
        string s;
        cin>>s;
        int n=s.size();
        string r=s;
        reverse(r.begin(),r.end());
        // cout<<s<<" "<<r<<"\n";
        int i;
        for(i=0;i<n;i++){
            if(s[i]!=r[i])break;
        }
        if(n==i){
            cout<<0<<"\n";
            continue;
        }
        int ans1=n-i-1;
        for(i=n-1;i>=0;i--){
            if(s[i-1]!=s[i])break;
        }
        // cout<<ans1<<"\n";
        cout<<min(ans1,i)<<"\n";

    }
    return 0;
}