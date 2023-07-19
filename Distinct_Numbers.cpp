#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    set<int> us;
    for(int i=0;i<T;i++){
        int x;
        cin>>x;
        us.insert(x);
    }
    cout<<us.size();


    return 0;
}