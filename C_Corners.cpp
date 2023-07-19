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
        int n,m;
        cin>>n>>m;
        vector<string> a(n);
        int cnt=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        for(auto it:a){
            for(auto i:it){
                if(i=='1')cnt++;
            }
        }
        if(cnt==0){
            cout<<0<<"\n";
            continue;
        }
        int mn=INT_MAX,f=0;

        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                int t;
                t=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]-4*'0';
                t--;
                if(t==1 || t==0){
                    mn=1;
                    f=1;
                    break;
                }
                else if(t==2 || t==3){
                    mn=min(mn,t);
                }
                
            }
            if(f==1)break;
        }
        cout<<cnt-mn+1<<"\n";
    }
    return 0;
}