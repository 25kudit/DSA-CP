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


int binpow(int a, int b){
    int res=1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
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
        if(n==1){
            cout<<3<<"\n";
            continue;
        }
        if(n && !(n&(n-1))){
            cout<<n+1<<"\n";
            continue;
        }
        int i=0;
        while(n>0){
            if(n%2==1)break;
            i++;
            n/=2;
        }
        cout<<binpow(2,i)<<"\n";
    }
    return 0;
}