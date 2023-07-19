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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



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
        unordered_set<int> missing,cont;
        for(int i=0;i<n;i++){
            if(s[i]=='0') missing.insert(i+1);
            else cont.insert(i+1);
        }
        unordered_map<int, int> mp;
        for(int temp=1;temp<=n;temp++){
            for(int i = temp;i<=n;i+=temp){
                if(cont.find(i)!= cont.end()){
                    break;
                }
                if(missing.find(i)!=missing.end()){
                    mp[temp]++;
                    missing.erase(i);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=(i*mp[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}