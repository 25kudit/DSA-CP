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
        vector<int> bits(32,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if(a[i]&(1<<j))bits[j]++;
                // cout<<bits[j]<<"& ";
            }
            // cout<<"\n";
        }
        int f=0;
        for(int i=0;i<32;i++){
            if(bits[i]>=2){
                f=1;
                break;
            }
        }
        if(f!=1){
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
        int no=INT_MIN,ind=-1;
        for(int i=0;i<32;i++){
            if(no<bits[i]){
                no=bits[i];
                ind=i;
            }
        }
        // cout<<no<<"&\n";
        // continue;
        vector<pair<int ,int>> ans;
        for(int i=0;i<n;){
            int l=i+1,r=i+1,f=0;
            if((a[r-1] & 1<<ind)){
                // ans.push_back({l,r});
                r++;
                i++;
                f=1;
            }
            while((a[r-1] & 1<<ind) == 0 && r<=n){
                r++;
                i++;
            }
            if(f==0 && (a[r-1] & 1<<ind)){
                r++;
                i++;
            }
            while((a[r-1] & 1<<ind) == 0 && r<=n){
                r++;
                i++;
            }
            ans.push_back({l,r-1});
            
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans){
            cout<<it.first <<" "<<it.second<<"\n";
        }

        

    }
    return 0;
}