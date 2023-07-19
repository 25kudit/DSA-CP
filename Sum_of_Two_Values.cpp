#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(make_pair(t, i));
    }
    sort(a.begin(), a.end());
    int i = 0, j = n - 1, f = 0;
    while (i < j)
    {
        if (a[i].first + a[j].first == x)
        {
            if (a[i].second < a[j].second)
                cout << a[i].second + 1 << " " << a[j].second + 1;
            else
                cout << a[j].second + 1 << " " << a[i].second + 1;
            f = 1;
            break;
        }
        else if (a[i].first + a[j].first < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if (f == 0)
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}