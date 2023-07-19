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
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        if(x==1){
            if(a==3 && b==0)cout<<"yes\n";
            else if(a==2 && b==3) cout<<"yes\n";
            else cout<<"no\n";
        }
        else if(x==2){
            if(a==3 && b==1)cout<<"yes\n";
            else if(a==0 && b==3) cout<<"yes\n";
            else cout<<"no\n";
        }
        else if(x==3){
            if(a==2 && b==0)cout<<"yes\n";
            else if(a==0 && b==1) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}