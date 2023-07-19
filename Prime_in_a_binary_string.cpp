#include <bits/stdc++.h>
using namespace std;
bool isprime(int i)
{
    if (i <= 1)
        return 0;
    else if (i == 2)
        return 1;
    else if (i % 2 == 0)
        return 0;

    for (int a = 3; a <= log10(i); a += 2)
    {
        if ((i % a) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long int n = s.length(), flag = 1;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int sub = stoi(s.substr(i, j), 0, 2);
                if (isprime(sub) == 1)
                {
                    cout << "YES";
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                break;
        }
        if (flag == 1)
            cout << "NO";
        cout << "\n";
    }
    return 0;
}