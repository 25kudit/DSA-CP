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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int st=0,en=n-1;
        while(a[st]==0 && st<n)st++;
        while(a[en]==0 && en>=0)en--;
        int cnt=0,f=0;
        while(st<=en){
            f=1;
            if(a[st]==0){
                cnt++; 
                break;
            }
            st++;     
        }
        if(f==0) cout<<0<<"\n";
        else{
            if(cnt==0) cout<<1<<"\n";
            else cout<<2<<"\n";
        }
    }
    return 0;
}