#include <bits/stdc++.h>
using namespace std;
#define int long long

int fib(int n)
{
    if (n == 1 || n == 2)
        return n;
    int a = 2, b = 1;
    for (int i = 2; i < n; i++)
    {
        int t = a + b;
        b = a;
        a = t;
    }
    return a;
}

signed main()
{
    set<pair<int, int>> st;
    // st.u
    st.insert({5, 0});
    st.insert({1, 1});
    st.insert({5, 3});
    st.insert({5, 4});
    auto it = st.upper_bound({5, 3});
    cout << (1<<3);

    return 0;
}
