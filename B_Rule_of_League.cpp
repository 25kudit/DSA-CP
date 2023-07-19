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
        int n,x,y;
        cin>>n>>x>>y;
        if(x!=0 && y!=0){
            cout<<-1<<"\n";
            continue;
        }
        int t=x+y;
        if(t==0 || (n-1)%t){
            cout<<-1<<"\n";
            continue;
        }
        for(int i=2;i<=n;){
            int cnt = 0,tmp=i;
            while(cnt<t){
                cout<<tmp<<" ";
                i++;cnt++;
            }
        }
        cout<<"\n";
    }
    return 0;
}