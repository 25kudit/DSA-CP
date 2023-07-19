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
        vector<int> a(n),b(n);
        int n1=0,n2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)n1++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==1)n2++;
        }
        int op1=abs(n1-n2)+1,op2=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])op2++;
        }
        cout<<min(op1,op2)<<"\n";

    }
    return 0;
}