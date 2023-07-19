#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    set<int> num;
    for (int i = 1; i <= n; i++)
        num.insert(i);
    auto it = num.begin();
    while (n > 0)
    {
        if (next(it) == num.end())
        {
            cout << *num.begin();
            num.erase(num.begin());
            it = num.begin();
        }
        else
        {
            cout << *next(it);
            num.erase(next(it));
            it++;
            if (it == num.end())
                it = num.begin();
        }
        cout<<" ";
        n--;
    }

    return 0;
}