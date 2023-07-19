#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(n, 0);
        if (k % 2 == 1)
        {
            for (int i = 0; i < n ; i++)
            {
                if (s[i] == '1' )
                {
                    if (k > 0)
                    {
                        a[i] = 1;
                        k--;
                    }
                    else{
                        s[i]='0';
                    }
                }
                else
                {
                    a[i] == 0;
                    s[i] = '1';
                }
            }
        }
        else
        {
            for (int i = 0; i < n ; i++)
            {
                if (s[i] == '1')
                    a[i] = 0;
                else if (s[i] == '0' && k > 0)
                {
                    s[i] = '1';
                    k--;
                    a[i] = 1;
                }
            }
        }
        // k++;
        if (k > 0)
        {
            if (k % 2 == 0)
            {
                a[n - 1] +=k;
                
            }
            else
            {
                a[n - 1] += k;
                if (s[n - 1] == '1')
                    s[n - 1] = '0';
                else
                    s[n - 1] = '1';
            }
        }
        cout << s << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}