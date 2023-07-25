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
        vector<int> v(n - 1);
        for (int i=0;i<n-1;i++)
            cin >> v[i];
        
        multiset<int> diff;
        set<int> st;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        diff.insert(v[0]);
        st.erase(v[0]);
        for (int i = 1; i < n - 1; i++)
        {
            diff.insert(v[i] - v[i - 1]);
        }
        for (int i = 1; i < n - 1; i++)
        {
            st.erase(v[i] - v[i - 1]);
        }
        
        if (st.size() == 1)
        {
            cout << "YES\n";
            continue;
        }
        if (st.size() != 2)
        {
            cout << "NO\n";
            continue;
        }
        int temp = *st.begin() + *st.rbegin();
        if (diff.find(temp) == diff.end())
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            diff.erase(diff.find(*st.begin() + *st.rbegin()));
            diff.insert(*st.begin());
            diff.insert(*st.rbegin());
        }
        int k = 1,f=0;
        for (auto &i : diff)
        {
            if (i != k)
            {
                f=1;
                break;
            }
            k++;
        }
        if(f)cout<<"NO\n";
        else cout << "YES\n";
    }
    return 0;
}