#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type,less<int> ,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin>>n;
        ll mn=0;
        if(n<4 || n%2==1){
            cout<<-1<<"\n";
            continue;
        }
        if(n%4==0) mn=n/4;
        else if( n%4==2) mn=(n-6)/4+1;
        else mn=-1;
        ll mx=0;
        if(n%6==0) mx=n/6;
        else if(n%6 == 2) mx=(n-8)/6+2;
        else if(n%6 == 4) mx=(n-4)/6 +1;
        else mx=-1;

        if(mn==mx && mn==-1) cout<<-1;
        else cout<<mx<<" "<<mn;
        cout<<"\n";
    }

    return 0;
}