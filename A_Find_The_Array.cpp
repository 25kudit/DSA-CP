#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int s;
        cin>>s;
        int i=1;
        while(i*i<s){
            i++;
        }
        cout<<i<<"\n";
    }

    return 0;
}