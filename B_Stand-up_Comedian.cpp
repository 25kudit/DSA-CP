#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
    cin >> T;
    while (T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ma = 0, mb = 0, cnt = 0;
        ma = mb = cnt = a;
        if(c>b){
            cnt+=(b*2);
            c-=b;
            cnt+=min(d+c,1+a);
        }
        else if(b>c){
            cnt+=(c*2);
            b-=c;
            cnt+=min(d+b,1+a);
        }
        else{
            cnt+=(b+c)+min(d,ma+1);
        }
        if(a==0){
            cout<<1<<"\n";
            continue;
        }
        cout<<cnt<<"\n";

    }
    return 0;
}