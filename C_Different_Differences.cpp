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
        int n,k;
        cin>>k>>n;
        vector<int> ans;
        int cnt = 1;
        ans.push_back(n);
        for(int i=0;i<k-1;i++){
            if(n-cnt >(k-i-2)){
                n-=cnt;
                ans.push_back(n);
                cnt++;
            }
            else{
                n--;
                ans.push_back(n);
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto it:ans)cout<<it<<" ";
        cout<<"\n";
        

    }
    return 0;
}
