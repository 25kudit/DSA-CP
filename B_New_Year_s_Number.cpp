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
#define mx 10000000



void solve(){
    int n,f=0;
    cin>>n;
    while(n>=2020){
        if(n%2020==0 || n%2021==0){
            f=1;
            break;
        }
        n-=2021;
    }  
    if(f) cout<<"YES";
    else cout<<"NO";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}