#include <bits/stdc++.h>

using namespace std;

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
        string s;
        cin >> s;
        int k;
        cin >> k;
        int present[26];
        for (int i = 0; i < 26; i++)
            present[i] = 0;
        char c;
        for (int i = 0; i < k; i++)
        {
            cin >> c;
            present[c - 'a'] = 1;
        }
        int ans = 0, len = 0, i;
        for (i = 0; i < n; i++)
        {

            if (present[s[i] - 'a'] != 0)
            {
                ans = max(ans, len);
                len = 1;
            }
            else
            {
                len++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}