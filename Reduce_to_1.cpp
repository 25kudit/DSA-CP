#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        if(n%2==1){
            cout<<1<<"\n";
            continue;
        }
        ll temp = sqrt(n);
        if(temp * temp == n) {
            cout<<1<<"\n";
            continue;
        }
        ll cnt=0;
        while(n%2==0){
            cnt++;
            n/=2;
        }
        if(cnt%2==1){
            cout<<-1<<"\n";
            continue;
        }
        if(cnt%2 ==0 ){
            cout<<2<<"\n";
            continue;
        }
    }

    return 0;
}