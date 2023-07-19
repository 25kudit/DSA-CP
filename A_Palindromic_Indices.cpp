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
        cin>>n;
        string s;
        cin>>s;
        int x,y,cnt;
        char c=s[n/2];
        if(n%2==0){
            x=n/2 -2;
            y=n/2+1;
            cnt=2;
        }
        else {
            x=n/2-1;
            y=n/2+1;
            cnt=1;
        }
        while(x>=0 && s[x]==c){
            cnt++;
            x--;
        }
        while(y<n && s[y]==c){
            cnt++;
            y++;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}