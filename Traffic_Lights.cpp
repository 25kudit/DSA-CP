#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int x,n;
    cin>>x>>n;
    set<int> pos;
    multiset<int> len;
    pos.insert(0);
    pos.insert(x);
    len.insert(x);
    for(int i=0;i<n;i++) {
        int p;
        cin>>p;
        pos.insert(p);
        auto it = pos.find(p);
        int previous= *prev(it);
        int nxt = *next(it);
        len.erase(len.find(nxt-previous));
        len.insert(p-previous);
        len.insert(nxt-p);
        cout<<*len.rbegin()<<" ";
    }
    return 0;
}