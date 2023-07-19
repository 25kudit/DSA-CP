#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int ans=0,i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            i++;
            j--;
        }
        else{
            j--;
        }
        ans++;
    }
    cout<<ans<<"\n";




    // int a[n + 1];
    // a[0] = 0;
    // for (int i = 1; i <= n; i++)
    //     cin >> a[i];
    // sort(a, a + n + 1);
    // int ans = 0, i = 1, j = n;
    // while (i < j)
    // {
    //     if (a[i] + a[j] > x)
    //     {
    //         ans++;
    //         j--;
    //     }
    //     else if (a[i] + a[j] <= x)
    //     {
    //         ans++;
    //         i++;
    //         j--;
    //     }
    // }
    // if (i == j)
    //     ans++;
    // cout << ans;
    return 0;
}