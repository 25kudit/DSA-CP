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
        map<int,int> mp;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            a[i]=t;
            mp[t]++;
        }
        int f=0;
        for(auto it:mp){
            if(it.second == 1) {
                f=1 ;
                break;
            }
        }
        if(f==1){
            cout<<-1<<"\n";
            continue;
        }
        for(int i=0;i<n-1;){
            int j=i;
            while(a[j]==a[j+1]){
                cout<<j+2<<" ";
                j++;
            }
            cout<<i+1<<" ";
            i=j+1;
        }
        cout<<"\n";
        

    }
    return 0;
}