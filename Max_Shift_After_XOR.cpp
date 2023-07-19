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
        int mxsize=0,i,st;
        for(i=0;i<n;){
            int t=a[i];
            st=i;
            while(a[i]==t)i++;
            if((i-st)%2)break;   
        }
        for(int cnt=0;cnt<st+1;cnt++){
            int t=a[0];
            for(int j=0;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[n-1]=t;
        }
        int xr=0;
            unordered_set<int> s;
            for(int j=0;j<n;j++){
                s.insert(a[j]^xr);
                xr=(a[j]^xr);
            }
        // for(int i=0;i<n;i++){
        //     int xr=0;
        //     unordered_set<int> s;
        //     for(int j=0;j<n;j++){
        //         s.insert(a[j]^xr);
        //         xr=(a[j]^xr);
        //     }
        //     if(mxsize<(int)s.size()){
        //         for(auto it: a) cout<<it<<" ";
        //         mxsize=s.size();
        //         cout<<"\n";
        //     }
        //     mxsize=max(mxsize,(int)s.size());
        //     int t=a[0];
        //     for(int j=0;j<n-1;j++){
        //         a[j]=a[j+1];
        //     }
        //     a[n-1]=t;
        //     // for(auto it: a)cout<<it<<" ";
        //     // cout<<"\n";
        // }
        cout<<s.size()<<"\n";
    }
    return 0;
}