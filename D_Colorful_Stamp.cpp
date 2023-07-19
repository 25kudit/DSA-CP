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
        cin >> n;
        string s;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == 'W')
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }
        int fl=0;
        for(int i=0;i<n;){
            int nr=0,nb=0,f=0;
            while(s[i] == 'W' && i<n) i++;
            while(s[i]!='W' && i<n){
                if(s[i] == 'B')nb++;
                else nr++;
                i++;
                f=1;
            }
            if(f==1 && (nb==0 || nr==0)){
                cout<<"NO\n";
                fl=1;
                break;

            }
        }
        if(fl==0){
            cout<<"YES\n";
        }
    }

    return 0;
}