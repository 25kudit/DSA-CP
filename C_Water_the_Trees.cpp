#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    int i = 1;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        int mex = a[0];
        int i = 1;
        while (1)
        {
            for (int j = 1; j < n; j++)
            {
                if (i % 2 == 1 && a[j] - mex > 0 && a[j] - mex != 2)
                {
                    a[j]++;
                    i++;
                }
                else if(i%2==1 && a[j]-mex==2){
                    
                }
                else if (i % 2 == 0 && a[j] - mex >= 2)
                {
                    i++;
                    a[j] += 2;
                }
                else
                {
                    i++;
                }
            }
        }
    }

    return 0;
}