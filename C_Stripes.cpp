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
        vector<string> a;
        for(int i=0;i<8;i++){
            string s;
            cin>>s;
            a.push_back(s);
        }
        int f=0;
        for(int i=0;i<8;i++){
            f=0;
            for(int j=0;j<8;j++){
                if(a[i][j]!='R'){
                    // cout<<i<<" "<<j<<"\n";
                    f=1;
                    break;
                }
            }
            if(f==0)break;
        }
        if(f==0)cout<<"R\n";
        else cout<<"B\n";

    }
    return 0;
}