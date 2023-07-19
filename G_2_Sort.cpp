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
        cin>>n>>k;
        vector<int> a(n+1,INT_MAX);
        for(int i=0;i<n;i++)cin>>a[i];
        int cnt=0,it=0,i;
        vector<int> temp(n,0);
        for(int i=1;i<n;i++){
            if(a[i-1]<2*a[i])temp[i]=1;
        }
        for(int i=1;i<n;i++){
            temp[i]+=temp[i-1];
        }
        for(i=k;i<n;i++){
            if(temp[i]-temp[i-k]==k)cnt++;
        }
        
        cout<<cnt<<"\n";
    }
    return 0;
}