#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        set<ll> s;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        // if(s.size()==1){
        //     cout<<0<<"\n";
        //     continue;
        // }
        vector<ll> cnt(32, 0);
        for (auto it : s)
        {
            for (int i = 0; i < 32; i++)
            {
                if ((it & 1 << i) != 0)
                    cnt[i]++;
                // cout << cnt[i] << "%\n";
            }
        }
        ll no = 0;
        for (int i = 0; i < 32; i++)
        {
            if (cnt[i] == s.size())
            {
                no = (no | 1 << i);
            }
        }
        watch(no);
        ll ans = 0;
        for (int i = 0; i < n;)
        {
            if (a[i] == no)
            {
                i++;
            }
            else if (i < n - 1 && (a[i] & a[i + 1]) == no)
            {
                // cout<<i<<"^";
                i += 2;
                ans++;
            }
            // else if (a[i] & no == no)
            // {
            //     i++;
            //     ans++;
            // }
            else
            {
                i++;
                ans++;
            }
        }
        // cout<<ans<<"&\n";
        cout << min(ans, n - 1) << "\n";
    }

    return 0;
}