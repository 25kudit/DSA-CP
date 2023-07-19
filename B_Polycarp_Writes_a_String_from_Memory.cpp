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
        int cnt=0,d=0;
        vector<int> a(26,0);
        for(int i=0;i<s.size();){
            while(d<=3 && i<s.size()){
                // cout<<s[i];
                if(a[s[i]-'a']==0){
                    d++;
                    a[s[i]-'a']++;
                }
                i++;
            }
            if(d==4)i--;
            // cout<<"\n";
            cnt++;
            d=0;
            for(int x=0;x<26;x++)a[x]=0;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}