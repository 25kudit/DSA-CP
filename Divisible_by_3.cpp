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
        int a,b;
        cin>>a>>b;
        if(a%3==0 || b%3==0){
            cout<<0<<"\n";
        }
        else if(a==b){
            cout<<1<<"\n";
        }
        else{
            int i=0;
            while(1){
                i++;
                if(a>b)a=a-b;
                else b=b-a;
                if(a%3==0 || b%3==0){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}