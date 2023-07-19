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
        sort(a.begin(),a.end());
        if(n==2){
            for(int i=0;i<n;i++)cout<<a[i]<<" ";
            cout<<"\n";
            continue;
        }
        vector<int> diff;
        for(int i=0;i<n-1;i++)diff.push_back(a[i+1]-a[i]);
        int mini=0,mind=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(mind>diff[i]){
                mind=diff[i];
                mini=i;
            }
        }
        mini++;
        vector<int> ans;
        for(int i=mini;i<n;i++)ans.push_back(a[i]);
        for(int i=0;i<mini;i++)ans.push_back(a[i]);
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}