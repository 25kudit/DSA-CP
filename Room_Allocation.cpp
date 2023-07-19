#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

bool cmp(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b)
{
    if (a.first.first == b.first.first)
        return a.first.second < b.first.second;
    return a.first.first < b.first.first;
}

int main()
{
    int n;
    cin >> n;
    multiset<pair<int, int>> dep;
    vector<int> room(n, 0);
    vector<pair<pair<int, int>, int>> time;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        time.push_back({{a, b}, i});
    }
    sort(time.begin(), time.end(), cmp);
    int rm = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        a = time[i].first.first;
        b = time[i].first.second;
        if (dep.empty() || a <= dep.begin()->first)
        {
            rm++;
            dep.insert({b, rm});
            room[time[i].second] = rm;
        }
        else if (a > dep.begin()->first)
        {
            int trm = dep.begin()->second;
            room[time[i].second] = trm;
            dep.erase(dep.begin());
            dep.insert({b, trm});
        }
    }
    cout << rm << "\n";
    for (int i = 0; i < n; i++)
        cout << room[i] << " ";

    return 0;
}