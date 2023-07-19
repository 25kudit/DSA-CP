#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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

int caland(int a,int b){
    int ans =0;
    for(int i=61;i>=0;i--){
        if((a & (1ll<<i)) == (b & (1ll<<i)))
            ans|=(a & (1ll<<i));
        else break;
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
        int n,x;
        cin>>n>>x;
        int st = n,en = 5e18+10,ans=-1;

        while(st<=en){
            int mid = (st+en)/2,andval= caland(n,mid);
            if(andval==x){
                ans = mid;
                en=mid-1;
            }
            else if(andval > x)st=mid+1;
            else en=mid-1;
        }
        cout<<ans<<"\n";


    }
    return 0;
}