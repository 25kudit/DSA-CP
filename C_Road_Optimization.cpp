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
    // cin >> T;
    while (T--)
    {
        int n,l,k;
        cin>>n>>l>>k;
        vector<int> d(n+1,0),val(n,0);
        for(int i=0;i<n;i++)cin>>d[i];
        d[n]=l;
        for(int i=0;i<n;i++)cin>>val[i];
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(val[i]*(d[i+1]-d[i]));
        }
        multiset<int> diff;
        int prev=0,rem=1,curr=2;
        for(int i=2;i<=n;i++){
            curr=i;
            rem=curr-1;
            int val1 = (d[curr]-d[prev])*val[prev];
            int val2 = (d[rem]-d[prev])*val[prev] + (d[curr]-d[rem])*val[rem];
            if(val1<val2){
                // cout<<prev<<" "<<rem<<" "<<curr<<"&\n";
                if(k>0){
                    // rem=curr;
                    diff.insert(val2-val1);
                    ans-= (val2-val1);
                    k--;
                }
                else{
                    if((val2-val1)>*diff.begin()){
                        // rem=curr;
                        ans+=(*diff.begin());
                        diff.erase(diff.begin());
                        diff.insert(val2-val1);
                        ans-=(val2-val1);
                    }
                    else{
                        prev=rem;
                    }
                }
            }
            else{
                prev=rem;
                // rem=curr;
            }
            
        }
        cout<<ans<<"\n";

    }
    return 0;
}