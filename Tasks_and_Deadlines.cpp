#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> task;
    for (ll i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        task.push_back({a, b});
    }
    sort(task.begin(), task.end(), cmp);
    ll f = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        p += (task[i].second - (task[i].first + f));
        f += task[i].first;
    }
    cout << p;

    return 0;
}