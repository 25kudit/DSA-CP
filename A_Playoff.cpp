#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) cout << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        ll ans = (pow(2,n)+1e-9)-1;
        cout<<ans<<"\n";
    }

    return 0;
}