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
#define sz 100002

int binpow(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans + m) % m;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<bool> primes(sz, true);
    for (int i = 2; i * i <= sz; i++)
    {
        if(primes[i] == true){
            for(int j=i*i;j<=sz;j+=i){
                primes[j]=false;
            }
        }
    }
    primes[1]=false;
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1,0),pref(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pref[i]=a[i]+pref[i-1];
        }
        map<int,vector<int>> mp;
        map<int,set<int>> ms;
        for(int i=1;i<=n;i++){
            if(primes[i]==true){
                for(int k=1;k<=n;k++){
                    if(a[k]%i==0){ms[i].insert(a[k]);
                    // cout<<i<<"->"<<a[k]<<" ";
                    if(mp[i].size()==0)mp[i].push_back(a[k]);
                    else{
                        mp[i].push_back(a[k]+ *mp[i].rbegin());
                    }}
                }
                // cout<<"\n";
            }
        }
        int q;
        cin>>q;
        while(q--){
            int p,k;
            cin>>p>>k;
            int ans=0;
            ans+=pref[k];
            int te = k/p,cnt=0;
            // for(auto it: mp[p])cout<<it<<" ";
            // cout<<"\n";
            ans-=mp[p][te-1];
            for(auto it = ms[p].rbegin();cnt<te;it--,cnt++){
                
                ans+=*it;
            }
            cout<<ans<<"\n";
        }

    }
    return 0;
}