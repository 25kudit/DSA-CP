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
#define mod 1000000007


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> pal;
    for(int i=1;i<=40001;i++){
        string s= to_string(i);
        string t=s;
        reverse(t.begin(),t.end());
        if(t==s)pal.push_back(i);
    }
    vector<int> t(40001);
    t[0]=1;
    for(int i=0;i<pal.size();i++){
        for(int j=pal[i];j<40001;j++){
            t[j]+=t[j-pal[i]];
            t[j]%=mod;
        }
    }


    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        cout<<t[n]<<"\n";
    }
    return 0;
}