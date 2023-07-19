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


int binpow(int a,int b,int m){
    int ans = 1;
    while(b > 0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return (ans+m)%m;
}



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int w,h;
        cin>>w>>h;
        
        vector<int> hr0,hrh,vc0,vcw;
        int t;
        cin>>t;
        while(t--){
            int x;cin>>x;
            hr0.push_back(x);
        }
        cin>>t;
        while(t--){
            int x;cin>>x;
            hrh.push_back(x);
        }
        cin>>t;
        while(t--){
            int x;cin>>x;
            vc0.push_back(x);
        }
        cin>>t;
        while(t--){
            int x;cin>>x;
            vcw.push_back(x);
        }
        sort(hr0.begin(),hr0.end());
        sort(hrh.begin(),hrh.end());
        sort(vc0.begin(),vc0.end());
        sort(vcw.begin(),vcw.end());
        int a1,a2,a3,a4;
        a1=(*hr0.rbegin()-*hr0.begin())*(hrh.size()==0?max(*vc0.rbegin(),*vcw.rbegin()):h);
        a2=(*hrh.rbegin()-*hrh.begin())*(hr0.size()==0?max(*vc0.rbegin(),*vcw.rbegin()):h);
        a3=(*vc0.rbegin()-*vc0.begin())*(vcw.size()==0?max(*hr0.rbegin(),*hrh.rbegin()):w);
        a4=(*vcw.rbegin()-*vcw.begin())*(vc0.size()==0?max(*hr0.rbegin(),*hrh.rbegin()):w);
        cout<<max(a1,max(a2,max(a3,a4)))<<"\n";

    }
    return 0;
}