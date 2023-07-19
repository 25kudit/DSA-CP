#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> t;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        t.insert(temp);
    }
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        auto it = t.upper_bound(c);
        if(it==t.begin()) cout<<-1<<"\n";
        else{
            it--;
            cout<<*it<<"\n";
            t.erase(it);
        }
    }
    return 0;
}