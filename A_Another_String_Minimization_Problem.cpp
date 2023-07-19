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
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        string s="";
        for(int i=0;i<=m;i++)s+='B';
        for(int i=0;i<n;i++){
            if(a[i]<(m+1-a[i])){
                if(s[a[i]]=='B')s[a[i]]='A';
                else s[m+1-a[i]]='A';
            }
            else {
                if(s[m+1-a[i]]=='B')s[m+1-a[i]]='A';
                else s[a[i]]='A';
            }
        }
        for(int i=1;i<=m;i++)cout<<s[i];
        cout<<"\n";
    }
    return 0;
}