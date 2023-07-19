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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n == 1)
    {
        cout << (a[0] + 1) / 2 << "\n";
        return 0;
    }
    // case1
    int min1 = INT_MAX,mind, min2=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min1)
        {
            min1 = a[i];
            mind=i;            
        }
        // watch(min1);
        // watch(min2);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min2 && i!=mind)
        {
            min2 = a[i];
        }
        // watch(min1);
        // watch(min2);
    }
    // cout<<min1<<" &" <<min2;
    ll op1 = (min1 + 1) / 2 + (min2 + 1) / 2;
    // cout<<op1<<" 1\n";
    // case2
    
    ll op2;
    for (int it = 1; it < n; it++)
    {
        ll opr;
        ll x = min(a[it],a[it-1]);
        ll y= max(a[it],a[it-1]);
        if (2*x<y)
        {
            opr= (y+1)/2;
        }
        else 
        {
            opr = (x+y+2)/3;
        }
        op2 = min(op2, opr);
    }
    // cout<<op2<<" 2\n";
    // case3
    ll op3;
    for (int i = 0; i < n - 2; i++)
    {
        ll opr;
        opr = (min(a[i], a[i + 2])) + (max(a[i], a[i + 2]) - min(a[i], a[i + 2]) + 1) / 2;
        op3 = min(op3, opr);
        // watch(op3);
        // cout<<i<<" % "<<opr<<"\n";
    }
    // cout<<op3<<" 3\n";
    cout << min(op1, min(op2, op3)) << "\n";

    return 0;
}