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

void solve()
{
    long long n;
    cin >> n;
    long long ans = LLONG_MAX;
    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i)
        cin >> arr[i];
    for (long long i = 0; i < 3; ++i)
    {
        for (long long j = 0; j < 3; ++j)
        {
            long long currAns = 0;
            vector<long long> brr = arr;
            currAns += i + j;
            brr[0] += i;
            brr[1] += j;
            for (long long k = 2; k < n; ++k)
            {
                currAns += (3 - ((brr[k] + brr[k - 1] + brr[k - 2]) % 3)) % 3;
                brr[k] += (3 - ((brr[k] + brr[k - 1] + brr[k - 2]) % 3)) % 3;
            }
            ans = min(ans, currAns);
        }
    }
    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}