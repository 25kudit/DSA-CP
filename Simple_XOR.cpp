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
        int l,r;
        cin>>l>>r;
        if(l%2){
            if(l+4>r){
                cout<<-1<<"\n";
            }
            else{
                cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<"\n";
            }

        }
        else{
            cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
        }
    }
    return 0;
}