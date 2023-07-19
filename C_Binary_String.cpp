#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin>>s;
        int n=s.size(),n1=0,n0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')n0++;
            else n1++;
        }
        if(n1==0 || n0==0) {
            cout<<0<<"\n";
            continue;
        }
        ll ans=INT_MAX;
        for(int i=0;i<n;i++){
            ll cn1=0,cn0=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1')cn1++;
                else cn0++;
                ans=min(ans,(max(cn0,n1-cn1)));
            }
        }
        
        
        cout<<ans<<"\n";

    }
    return 0;
}