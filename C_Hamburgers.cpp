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
    string s;
    cin >> s;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int cb, cs, cc;
    cin >> cb >> cs >> cc;
    ll tot;
    cin >> tot;
    ll st = 0, lt = 10e14;
    int bf = 0, sf = 0, cf = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            bf++;
        else if (s[i] == 'S')
            sf++;
        else if (s[i] == 'C')
            cf++;
    }
    while (st < lt+1)
    {
        ll mid = (st + lt) / 2;
        ll cost = max((ll)0,cb*(bf*mid - nb)) + max((ll)0,cs*(sf*mid - ns)) + max((ll)0,cc*(cf*mid - nc));
        if(cost <= tot){
            st=mid+1;
        }
        else{
            lt=mid-1;
        }
    }
    cout<<(st+lt)/2;

    return 0;
}