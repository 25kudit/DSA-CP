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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int res=0,prev;
        prev=a[0];
        if(a[0]==0)res++;
        for(int i=1;i<n;i++){
            if(a[i]==0){
                res++;
            }
            else if(a[i]==3){
                if(prev==2)a[i]=1;
                else if(prev==1)a[i]=2;
            }
            else if(a[i]==prev){
                res++;
                a[i]=0;
            }
            prev=a[i];
        }
        cout<<res<<"\n";
    }
    return 0;
}