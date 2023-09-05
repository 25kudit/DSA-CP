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
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        if(a>=n){
            cout<<"YES\n";
            continue;
        }
        int cnt1=a,cnt2=a,f=0;
        for(int i=0;i<q;i++){
            if(s[i]=='+'){
                cnt1++;
                cnt2++;
            }
            else cnt1--;
            if(cnt1>=n){
                f=1;
                break;
            }
        }
        if(f)cout<<"YES\n";
        else if(cnt2>=n)cout<<"MAYBE\n";
        else cout<<"NO\n";
    }
    return 0;
}