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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        int mn = 1,mx=n,i=0,j=n-1,f=0;
        while(i<j){
            if(a[i]==mn || a[i]==mx){
                a[i]==mn?mn++:mx--;
                i++;
            }
            else if(a[j]==mn||a[j]==mx){
                a[j]==mn?mn++:mx--;
                j--;
            }
            else{
                cout<<i+1<<" "<<j+1<<"\n";
                f=1;
                break;
            }
        }
        if(!f)cout<<-1<<"\n";

    }

    return 0;
}
