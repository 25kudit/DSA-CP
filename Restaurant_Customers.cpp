#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;
    vector<pair<int, int>> t;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        t.push_back(make_pair(a, 1));
        t.push_back(make_pair(b, -1));
    }
    sort(t.begin(), t.end());

    int cmax = 0, ans = 0;
    for (int i = 0; i < t.size(); i++)
    {
        cmax += t[i].second;
        ans = max(ans, cmax);
    }

    cout << ans;

    return 0;
}