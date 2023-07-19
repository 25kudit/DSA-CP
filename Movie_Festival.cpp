#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> t;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        t.push_back(make_pair(a, b));
    }
    sort(t.begin(), t.end(), cmp);
    int lastend=-1,ans=0;
    for(int i=0;i<n;i++){
        if(t[i].first>=lastend){
            ans++;
            lastend=t[i].second;
        }
    }

    cout << ans;

    return 0;
}