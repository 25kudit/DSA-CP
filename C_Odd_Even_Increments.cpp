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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int f=0;
        for(int i=0;i<n;i+=2){
            if((a[0]%2)!=(a[i]%2)){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO\n";
            continue;
        }
        for(int i=1;i<n;i+=2){
            if((a[1]%2)!=(a[i]%2)){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
        
    }

    return 0;
}