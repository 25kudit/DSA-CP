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
        // cout<<T<<"\n";
        int n,c;
        cin>>n>>c;
        vector<int> pr(c+1,0);
        set<int> s;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            s.insert(t);
            pr[t]=1;
        }
        // for(auto it : s)cerr<<it<<" ";

        set<int> present,notpresent;
        for(int i=1;i<=c;i++){
            if(pr[i]==0)notpresent.insert(i);
            else present.insert(i);
        }
        if(pr[1]==0 && *s.rbegin()!=1){
            cout<<"No\n";
            continue;
        }
        if(pr[1]==1)present.erase(1);
        int f=0;
        for(auto it:notpresent){
            f=0;
            for(auto x:present){
                if(it*x>c)break;
                if(*present.lower_bound(it*x)<(it+1)*x){
                    // cout<<it<<" "<<x<<(x+1)*it<<" "<<*present.lower_bound(it*x);
                    f=1;
                    break;
                }
            }
            if(f)break;
        }
        // for(int i=2;i<=c;i++){
        //     if(present.find(i)==present.end())
        //         continue;
        //     for(int j=i;j<=c;j+=i){
        //         if(present.find(j)!=present.end())
        //             continue;
        //         if(i*j>c) break;
                

        //     }
        // }
        if(f)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}