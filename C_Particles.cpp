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

int kdane(vector<int> &nums)
{
    if(nums.size()==0)return -9999999999;
    int mx = *max_element(nums.begin(), nums.end()), curr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        curr += nums[i];
        mx = max(mx, curr);
        if (curr < 0)
            curr = 0;
    }
    return mx;
}

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
        vector<int> a(n), v1, v2;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i += 2)
            if(a[i]>0)v1.push_back(a[i]);
        for (int i = 1; i < n; i += 2)
            if(a[i]>0)v2.push_back(a[i]);

        int a1=kdane(v1),a2=kdane(v2);
        cout << max({*max_element(a.begin(),a.end()),a1,a2}) << "\n";
    }
    return 0;
}