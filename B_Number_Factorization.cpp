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
    // cout<<isval(100);
    // return 0;
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {

        int n;
        cin >> n;
        map<int, int> mp;
        while (n % 2 == 0)
        {
            mp[2]++;
            n /= 2;
        }
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            while (n % i == 0)
            {
                mp[i]++;
                n /= i;
            }
        }
        if (n > 2)
            mp[n]++;

        int ans=0;
        while (mp.size())
        {
            int mn = INT_MAX, mne = 0;
            int mult = 1;
            for (auto it : mp)
            {
                mult *= it.first;
                if (mn > it.second)
                {
                    mn = it.second;
                    mne = it.first;
                }
            }
            for (auto &it : mp)
            {
                it.second -= mn;
            }
            ans += mult * mn;
            mp.erase(mne);
        }
        cout << ans <<"\n";
    }
    return 0;
}