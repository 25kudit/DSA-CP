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
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            um[t%10]++;
        }
        if(um[1]>=3){
            cout<<"YES\n";
            continue;
        }
        if(um[2]>=1 && um[1]>=1 && um[0]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[3]>=1 && um[0]>=2){
            cout<<"YES\n";
            continue;
        }
        if(um[9]>=1 && um[2]>=2){
            cout<<"YES\n";
            continue;
        }
        if(um[9]>=1 && um[3]>=1 && um[1]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[9]>=1 && um[4]>=1 && um[0]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[8]>=1 && um[5]>=1 && um[0]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[8]>=1 && um[4]>=1 && um[1]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[8]>=1 && um[3]>=1 && um[2]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[7]>=1 && um[6]>=0 && um[0]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[7]>=1 && um[5]>=1 && um[1]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[7]>=1 && um[4]>=1 && um[2]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[7]>=1 && um[3]>=2){
            cout<<"YES\n";
            continue;
        }
        if(um[6]>=2 && um[1]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[6]>=1 && um[5]>=1 && um[2]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[6]>=1 && um[4]>=1 && um[3]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[5]>=2 && um[3]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[5]>=2 && um[4]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[9]>=2 && um[5]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[9]>=1 && um[8]>=1 && um[6]>=1){
            cout<<"YES\n";
            continue;
        }
        if(um[9]>=1 && um[7]>=2){
            cout<<"YES\n";
            continue;
        }
        if(um[8]>=2 && um[7]>=1){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";

    }
    return 0;
}