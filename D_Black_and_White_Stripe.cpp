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
        string s;
        cin>>s;
        int opr=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W')opr++;
        }
        int mn=opr;
        for(int i=1;i<=n-k;i++){
            if(s[i-1]=='B' && s[i+k-1]== 'W')opr++;
            if(s[i-1]=='W' && s[i+k-1]=='B') opr--;
            mn=min(mn,opr);
        }
        cout<<mn<<"\n";
    }
    return 0;
}