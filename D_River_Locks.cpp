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
    int n;
    cin >> n;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
    int l=1,r=1e9+1,ans=0;
    while(l<=r){
        int mid = (l+r)/2,f=0,carry=0;
        for(int i=0;i<n;i++){
            carry+=mid;
            if(carry< a[i]){
                f=1;
                break;
            }
            carry-=a[i];
        }
        if(f) {
            l=mid+1;
        }
        else{
            ans=mid;
            r=mid-1;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x<ans){
            cout<<-1<<"\n";
            continue;
        }
        cout<<sum/x+((sum%x)?1:0)<<"\n";
    }
    return 0;
}