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
        ll n,x;
        cin>>n>>x;
        ll a[n],k=INT_MAX;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            k=min(k,a[i]);
        }
        int m;

        if(x%k==0) m= x/k;
        else m=((int)x/k) +1;
        if(n >= m){
            cout<<n<<"\n";
        }
        else{
            cout<<m<<"\n";
        }
    }

    return 0;
}