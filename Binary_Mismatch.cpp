#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int n0 = 0, n1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                n1++;
            else
                n0++;
        }

        if (n0 - n1 == 0)
        {
            cout << "YES\n";
            cout << 1 << " " << n << "\n";
        }
        else
        {
            if (abs(n0 - n1) % 2 == 1)
            {
                cout << "NO\n";
            }
            else
            {
                if (n0 > n1)
                {

                    int req = (n0 - n1) / 2;
                    int i, j, flag;
                    for (i = 0; i < n - req;)
                    {
                        int cnt = 0;
                        j = i;
                        flag = 0;
                        while (j < n)
                        {
                            if (s[j] == '0')
                                cnt++;
                            else
                                cnt--;
                            // cout<<cnt<<"&\n";
                            if (cnt == req)
                            {
                                flag = 1;
                                break;
                            }
                            j++;
                        }
                        if (flag == 0)
                            i++;
                        else
                            break;
                    }
                    if (flag == 0)
                        cout << "NO\n";
                    else
                    {
                        cout << "YES\n";
                        cout << i + 1 << " " << j + 1 << "\n";
                    }
                }
                else
                {
                    int req = (n1 - n0) / 2;
                    int i, j, flag;
                    for (i = 0; i < n - req;)
                    {
                        int cnt = 0;
                        j = i;
                        flag = 0;
                        while (j < n)
                        {
                            if (s[j] == '1')
                                cnt++;
                            else
                                cnt--;
                            if (cnt == req)
                            {
                                flag = 1;
                                break;
                            }
                            j++;
                        }
                        if (flag == 0)
                            i = j + 1;
                        else
                            break;
                    }
                    if (flag == 0)
                        cout << "NO\n";
                    else
                    {
                        cout << "YES\n";
                        cout << i + 1 << " " << j + 1 << "\n";
                    }
                }
            }
        }
    }

    return 0;
}