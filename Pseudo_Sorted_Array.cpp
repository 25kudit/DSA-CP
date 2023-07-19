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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // int f = 0;
        // if(n==2){
        //     cout<<"YES\n";
        //     continue;
        // }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                {
                    int t = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = t;
                    // f = 1;
                    // continue;
                    break;
                }
                // if (f == 1)
                // {
                //     f = 2;
                //     break;
                // }
            }
        }
        int f=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                f=1;
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