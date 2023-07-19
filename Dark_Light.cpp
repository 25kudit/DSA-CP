#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) cout << (#x) << " = " << (x) << endl

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        if(n%4 == 0){
            if(k==0){
                cout<<"off\n";
            }
            else{
                cout<<"on\n";
            }
        }
        else{
            if(k==1){
                cout<<"Ambiguous\n";
            }
            else{
                cout<<"on\n";
            }
        }
    }

    return 0;
}