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
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        int mxb=s/k;
        if(b>mxb){
            cout<<-1<<"\n";
            continue;
        } 
        int mnb=(s-(n-1)*(k-1))/k;
        if(b<mnb){
            cout<<-1<<"\n";
            continue;
        }
        // cout<<"h\n";
        cout<<min((b+1)*k-1,s)<<" ";
        s-=min((b+1)*k-1,s);
        for(int i=1;i<n;i++){
            if(s>=k-1){
                cout<<k-1<<" ";
                s-=k-1;
            }
            else if(s>0){
                cout<<s<<" ";
                s=0;
            }
            else {
                cout<<0<<" ";
            }
        }
        cout<<"\n";

    }
    return 0;
}