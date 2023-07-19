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
        int n;
        cin >> n;
        vector<int> a(n - 1), res(n, -1);
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];
        for(int i=0;i<n-1;i++){
            if(res[i]!=-1){
                if(i<n-2 && a[i]<a[i+1])
                    res[i+1]=a[i];
            }
            else{
                if(i<n-2 && a[i]<a[i+1]){
                    res[i]=a[i];
                    res[i+1]=a[i];
                }
                else{
                    res[i]=a[i];
                }

            }
        }
        if (res[n - 1] == -1)
            res[n - 1] = a[n - 2];


        for (auto it : res)
            cout << it << " ";
        cout << "\n";

        // vector<int> v(n - 1), vans(n, -1);
        // for (auto &i : v)
        //     cin >> i;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (vans[i] != -1)
        //     {
        //         if (i + 1 != n - 1 && v[i + 1] > v[i])
        //         {
        //             vans[i + 1] = v[i];
        //         }
        //     }
        //     else
        //     {
        //         if (i + 1 != n - 1 && v[i + 1] > v[i])
        //         {
        //             vans[i] = vans[i + 1] = v[i];
        //         }
        //         else
        //         {
        //             vans[i] = v[i];
        //         }
        //     }
        // }
        // if (vans[n - 1] == -1)
        // {
        //     vans[n - 1] = v[n - 2];
        // }
        // for (auto i : vans)
        //     cout << i << " ";
    }
    return 0;
}