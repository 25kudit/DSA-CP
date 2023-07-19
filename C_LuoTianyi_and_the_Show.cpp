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
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        int left=0,right=0;
        set<int> temp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1)left++;
            else if(a[i]==-2)right++;
            else temp.insert(a[i]);
        }
        vector<int> fixed;
        fixed.push_back(0);
        for(auto it :temp)fixed.push_back(it);
        fixed.push_back(m+1);
        int ans = INT_MIN,k=fixed.size();
        if(fixed.size()==2){
            cout<<min(m,max(left,right))<<"\n";
            continue;
        }
        for(int i=0;i<k;i++){
            int curr =0;
            curr+=min(left+i,fixed[i]);
            curr+=min(right + k-i-2,m-fixed[i]);
            ans=max(ans,curr);
        }
        cout<<min(ans,m)<<"\n";

    }
    return 0;
}