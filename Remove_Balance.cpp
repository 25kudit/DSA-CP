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
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        stack<char> para;
        ll len = 0, f = 0, op = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                para.push(s[i]);
            if (s[i] == ')')
            {
                if (para.empty())
                {
                    len++;
                    if (f == 0)
                    {
                        op++;
                        f=1;
                    }
                }
                else
                {
                    para.pop();
                    f = 0;
                }
            }
        }
        len += para.size();
        cout << len <<" "<<op<< "\n";
    }

    return 0;
}