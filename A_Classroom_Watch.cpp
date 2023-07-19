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

bool isgood(int i,int n){
    int temp = i,s=0;
    while(temp>0){
        s+=temp%10;
        temp/=10;
    }
    return (n==(i+s));

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
        vector<int> ans;
        int d = log(n)+1;
        for(int i= n-9*d;i<=n;i++){
            if(isgood(i,n))ans.push_back(i);
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)cout<<it<<" ";

    }
    return 0;
}