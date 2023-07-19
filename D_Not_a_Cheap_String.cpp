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

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.first > b.first;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n, c;
        cin >> c;
        int ini = 0;
        n = s.size();
        for (int i = 0; i < n; i++)
            ini += (s[i] - 'a' + 1);
        // cout<<ini<<"%\n";
        if (ini <= c)
        {
            cout << s << "\n";
            continue;
        }
        set<pair<char, int>> sp;
        for (int i = 0; i < n; i++)
        {
            sp.insert({s[i], i});
        }
        // for(auto it: sp) cout<<it.first<<" "<<it.second<<"\n";
        // sort(sp.begin(),sp.end(),cmp);
        while (ini > c && sp.size() > 0)
        {
            ini -= ((*sp.rbegin()).first - 'a' + 1);
            auto t = *sp.rbegin();
            sp.erase(t);
        }
        // for(auto it: sp) cout<<it.first<<" "<<it.second<<"\n";
        if (sp.size() == 0)
        {
            cout << "\n";
            continue;
        }
        vector<char> ans(n, '0');
        for (auto it : sp)
        {
            ans[it.second] = it.first;
        }
        for (int i = 0; i < n; i++)
        {
            if (ans[i] != '0')
                cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}