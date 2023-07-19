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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int down =0,h=-1,l=-1,i=1;

        // for(int i=1;i<n;)
        
            while(a[i]>=a[i-1] && i<n)i++;
            if(i==n){
                cout<<0<<"\n";
                continue;
            }
            h=a[i-1];
            while(a[i]<a[i-1] &&i<n)i++;
            l=a[i-1];
            if(h==a[0] && l==a[n-1]){
                cout<<(int)1e9-1<<"\n";
                continue;
            }
            while(a[i]>=a[i-1] &&i<n)i++;
            // if(down>1)break;
        
        if(i<n){
            cout<<-1<<"\n";
            continue;
        }
        // cout<<(h+l+1)/2<<"\n";
        int m = (h+l+1)/2;
        for(int i=0;i<n;i++){
            a[i]=abs(a[i]-m);
        }
        int f=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                f=1;
                break;
            }
        }
        if(f)cout<<-1<<"\n";
        else cout<<m<<"\n";



    }
    return 0;
}