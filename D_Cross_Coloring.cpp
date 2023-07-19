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
#define mod 998244353


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n,m,k,q;
        cin>>n>>m>>k>>q;
        vector<pair<int,int>> a;
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        set<int> cx,cy;
        int ans=1;
        for(int i=q-1;i>=0;i--){
            int f=0;
            if(cx.find(a[i].first)==cx.end()){
                cx.insert(a[i].first);
                f=1;
            }
            if(cy.find(a[i].second)==cy.end()){
                cy.insert(a[i].second);
                f=1;
            }
            if(f)ans=(ans*k)%mod;
            if(cx.size()==n || cy.size()==m)break;

        }
        cout<<ans<<"\n";
    }
    return 0;
}