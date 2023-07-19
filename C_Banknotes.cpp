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
        vector<int> a(n),note(n,LONG_LONG_MAX);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            note[i]=(int)(pow(10,a[i+1]-a[i])+1e-6)-1;
        }
        k++;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(note[i],k)*(int)(pow(10,a[i])+1e-6);
            k-=min(note[i],k);
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}