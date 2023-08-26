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
        int mn = a[0],ind=-1,cnt=0;
        for(int i=1;i<n;i++){
            if(a[i]>mn){
                ind = i;
                cnt++;
                break;
            }
            mn=min(mn,a[i]);
        }
        if(ind==-1){
            cout<<0<<"\n";
            continue;
        }
        int mnl=a[ind];
        for(int i=ind+1;i<n;i++){
            if(a[i]>mn && a[i]<mnl){
                cnt++;
                mnl=a[i];
            }
            mn=min(mn,a[i]);
        }
        cout<<cnt<<"\n";

    }
    return 0;
}
