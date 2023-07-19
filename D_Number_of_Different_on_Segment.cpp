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

struct node
{
    int unique;
    int freq[41];
};

struct segtree
{
    int size;
    vector<node> diff;

    node identity()
    {
        node t;
        t.unique = 0;
        for (int i = 0; i < 41; i++)
            t.freq[i] = 0;
        return t;
    }

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        diff.assign(2 * size, identity());
    }

    node combine(node l, node r)
    {
        node res;
        int t = 0;
        for (int i = 1; i <= 40; i++)
        {
            res.freq[i] = l.freq[i] + r.freq[i];
            if (res.freq[i] > 0)
                t++;
        }
        res.unique = t;
        return res;
    }

    void print(node n)
    {
        cout << n.unique << "\n";
        for (int i = 1; i <= 40; i++)
            cout << n.freq[i] << " ";
        cout << "\n";
    }

    void modify(int i, int val, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            for (int i = 0; i <= 40; i++)
                diff[x].freq[i] = 0;
            diff[x].freq[val] = 1;
            diff[x].unique = 1;
            return;
        }

        int m = (lx + rx) / 2;
        if (i < m)
            modify(i, val, 2 * x + 1, lx, m);
        else
            modify(i, val, 2 * x + 2, m, rx);

        diff[x] = combine(diff[2 * x + 1], diff[2 * x + 2]);
    }

    node calc(int l, int r, int x, int lx, int rx)
    {

        if (l >= rx || r <= lx)
            return identity();
        if (lx >= l && rx <= r)
            return diff[x];

        int m = (lx + rx) / 2;
        return combine(calc(l, r, 2 * x + 1, lx, m), calc(l, r, 2 * x + 2, m, rx));
    }
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        segtree st;
        st.init(n);
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            st.modify(i, t, 0, 0, st.size);
        }
        // st.print(st.diff[1]);
        // continue;
        while (m--)
        {
            int op;
            cin >> op;
            if (op == 1)
            {
                int l, r;
                cin >> l >> r;
                l--;
                node res = st.calc(l, r, 0, 0, st.size);
                cout << res.unique << "\n";
            }
            else
            {
                int i, val;
                cin >> i >> val;
                i--;
                st.modify(i, val, 0, 0, st.size);
            }
        }
    }
    return 0;
}