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
        string s;
        cin>>s;
        int cnt=0,st=0,en=n-1;
        while(st<en){
            if(s[st]!=s[en])cnt++;
            st++;
            en--;
        }
        for(int i=0;i<=n;i++){
            if(i>=cnt && i<=n-cnt){
                if(n%2)cout<<1;
                else (abs(i-cnt)%2==0)?cout<<1:cout<<0;
            }
            else cout<<0;
        }
        cout<<"\n";

        
    }
    return 0;
}