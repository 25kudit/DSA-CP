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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> arr(101, 0);
        int rep = 0, zer = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (arr[a[i]] != 0)
                rep = 1;
            arr[a[i]]++;
        }
        // if(arr[0]==n) cout<<0<<"\n";
        if (arr[0] != 0)
            cout << n - arr[0] << "\n";
        else
        {
            if (rep == 1)
                cout << n << "\n";
            if (rep == 0)
                cout << n + 1 << "\n";
        }
    }

    return 0;
}