#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl

void compute(int X, int Y)
{

    int A, B;

    if (X < Y)
    {
        A = -1;
        B = -1;
    }

    else if (abs(X - Y) & 1)
    {
        A = -1;
        B = -1;
    }

    else if (X == Y)
    {
        A = 0;
        B = Y;
    }

    else
    {

        A = (X - Y) / 2;

        if ((A & Y) == 0)
        {

            B = (A + Y);
        }

        else
        {
            A = -1;
            B = -1;
        }
    }

    if (A == -1 || B == -1)
        cout << -1 << "\n";
    else
        cout << A << " " << B << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int X = 2 * n, Y = n;
        auto compute = [&]()
        {
            int A, B;

            if (X < Y)
            {
                A = -1;
                B = -1;
            }

            else if (abs(X - Y) & 1)
            {
                A = -1;
                B = -1;
            }

            else if (X == Y)
            {
                A = 0;
                B = Y;
            }

            else
            {

                A = (X - Y) / 2;

                if ((A & Y) == 0)
                {

                    B = (A + Y);
                }

                else
                {
                    A = -1;
                    B = -1;
                }
            }

            if (A == -1 || B == -1)
                cout << -1 << "\n";
            else
                cout << A << " " << B << "\n";
        };
        compute();
    }
    return 0;
}