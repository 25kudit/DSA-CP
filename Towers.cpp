#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first > b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<int> cube;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        cube.push_back(t);
    }
    multiset<int> ms;
    for(int i=0;i<n;i++){
        auto it= ms.upper_bound(cube[i]);
        ms.insert(cube[i]);
        if(it!=ms.end()){
            ms.erase(it);
        }
        
    }
    cout<<ms.size();

    return 0;
}