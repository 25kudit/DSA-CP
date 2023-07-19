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
        ll n;
        cin >> n;
        map<string, ll> mp;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string temp = s;
            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c != s[0])
                {
                    temp[0] = c;
                    ans += mp[temp];
                }
            }
            temp = s;
            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c != s[1])
                {
                    temp[1] = c;
                    ans += mp[temp];
                }
            }
            mp[s]++;
        }
        cout << ans << "\n";
    }

    return 0;
}