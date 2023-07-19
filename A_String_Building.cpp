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
        string s;
        cin >> s;
        int i = 0, f = 0;
        while (i < s.length())
        {
            int na = 0, nb = 0;
            while (s[i] == 'a')
            {
                na++;
                i++;
            }
            if (na ==1)
            {
                f = 1;
                break;
            }
            while (s[i] == 'b')
            {
                nb++;
                i++;
            }
            if (nb ==1)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}