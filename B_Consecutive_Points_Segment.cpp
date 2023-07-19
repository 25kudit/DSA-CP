#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l=a[0];
        int r=a[n-1];
        if(r-l-1<=n) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}