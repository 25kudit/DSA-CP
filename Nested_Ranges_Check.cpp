#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

bool cmp(pair<pair<ll, ll>, ll> &a, pair<pair<ll, ll>, ll> &b)
{
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    else
        return a.first.first < b.first.first;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<pair<ll, ll>, ll>> s;
    vector<ll> contains(n, 0), contained(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        s.push_back({{a, b}, i});
    }
    sort(s.begin(), s.end(), cmp);
    ll minr = INT_MAX;
    for (auto it = --s.end(); it != --s.begin(); it--)
    {
        if (it->first.second >= minr)
        {
            contains[it->second] = 1;
        }
        minr = min(minr, it->first.second);
    }
    ll maxr = INT_MIN;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it->first.second <= maxr)
        {
            contained[it->second] = 1;
        }
        maxr = max(maxr, it->first.second);
    }
    for (ll i = 0; i < n; i++)
        cout << contains[i] << " ";
    cout << "\n";
    for (ll i = 0; i < n; i++)
        cout << contained[i] << " ";

    return 0;
}