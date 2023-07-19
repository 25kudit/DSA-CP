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
    // cin >> T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int f=-1,i;
        string t1,t2;
        for(i=0;i<n;i++){
            // int len= min(i+1,n-i-1);
            t1=s.substr(0,i+1);
            if(n>=2*(i+1))
                t2=s.substr(i+1,i+1);
            else{
                t2=s.substr(i+1,n-i-1);
                t2+=s.substr(0,2*(i+1)-n);
            }

            // cout<<t1<<"&"<<t2<<"\n";
            if(t1<t2){
                // f=i;
                break;
            }
        }
        string cp=s.substr(0,i+1);
        if(cp.size()>1 && cp[0]==cp[cp.size()-1])cp.pop_back();
        // cout<<cp<<"%\n";
        while(cp.length()<k){
            cp+=cp;
        }
        // cout<<cp<<"\n";
        string ans = cp.substr(0,k);
        cout<<ans<<"\n";
    }
    return 0;
}