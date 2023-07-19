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
        ll n, x;
        cin >> n >> x;
        vector<ll> s;
        for (ll i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            s.push_back(t-1);
        }
        sort(s.begin(), s.end());
        ll ans=0;
        for(ll i=1;i<n;i++){
            s[i]+=s[i-1];
        }
        for(ll i=0;i<n;i++){
            if((x-s[i])/(i+1)>=0){
                ans+=((x-s[i])/(i+1));
            }
        }
        // ll d = 0, ans = 0;
        // while (s[0] + d <= x)
        // {
        //     int exp = 0, i = 0;
        //     while((i<n) && (exp + s[i] + d <= x))
        //     {
        //         exp += (s[i] + d);
        //         ans++;
        //         i++;
        //     }
        //     // for(int i=0 ;i<n;i++) {
        //     //     if(exp+s[i] <= x){
        //     //         exp+=s[i];
        //     //         ans++;
        //     //     }
        //     //     s[i]++;
        //     // }
        //     d++;
        // }
        cout << ans << "\n";
    }

    return 0;
}