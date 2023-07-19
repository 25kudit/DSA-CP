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

bool check(string s)
{
    int b = 0;
    for (auto it : s)
    {
        if (it == '(')
            b++;
        if (it == ')')
            b--;
        if (b < 0)
            return true;
    }
    return false;
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
        int n = s.size();
        int op, cl;
        op = cl = n / 2;
        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                pos.push_back(i);
            else if (s[i] == '(')
                op--;
            else
                cl--;
        }
        for (int i = 0; i < pos.size(); i++)
        {
            if (i < op)
                s[pos[i]] = '(';
            else
                s[pos[i]] = ')';
        }
        if (op > 0 && cl > 0)
        {
            char t = s[pos[op - 1]];
            s[pos[op - 1]] = s[pos[op]];
            s[pos[op]] = t;
            if (check(s))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
    return 0;
}