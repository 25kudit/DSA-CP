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

int sum(int n){
    int ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
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
        if(n%10 ==9){
            int s1,s2,s3;
            s1=s2=s3=0;
            s1=sum(n);
            s2=sum(n+1);
            s3=sum(n+2);
            if((s1%2)==(s2%2))cout<<n+2<<"\n";
            else cout<<n+1<<"\n";

        }
        else cout<<n+1<<"\n";
    }
    return 0;
}