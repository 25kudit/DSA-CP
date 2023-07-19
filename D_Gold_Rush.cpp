#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

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
        int n, m;
        cin >> n >> m;
        if (n < m)
        {
            cout << "NO\n";
            continue;
            
        }
        if (m % 2)
        {
            int f=0;
            while (n )
            {
                if (n == m)
                {
                    cout << "YES\n";
                    f=1;
                    break;
                }
                if(n%3)break;
                n /= 3;
            }
            if(!f)cout << "NO\n";
        }
        else
        {
            int n1=n,cntn=0;
            while (n1 )
            {
                if(n1%2)break;
                n1/=2;
                cntn++;
            }
            int m1 = m, cntm = 0;
            while (m1 )
            {
                if(m1%2)break;
                cntm++;
                m1/=2;
            }
            if (cntn > cntm)
            {
                cout << "NO\n";
                continue;
            }
            int y = cntm - cntn;
            cntn = 0;
            while (y--)
            {
                m /= 2;
                m *= 3;
            }
            int f=0;
            while (n )
            {
                if (n == m)
                {
                    cout << "YES\n";
                    f=1;
                    break;
                }
                if(n%3)break;
                
                n /= 3;
            }
            if(!f)cout << "NO\n";
        }
    }
    return 0;
}