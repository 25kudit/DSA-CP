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
        int n, m;
        cin >> n >> m;
        if (n + m == 3)
        {
            cout << 1 << "\n";
            continue;
        }
        if(n==1 && m==1) {
            cout<<0<<"\n";
            continue;
        }
        if(n==1 || m==1) {
            cout<<-1<<"\n";
            continue;
        }
        int ans = 0;
        int eq = min(n, m);
        ans+=2*(eq-1);
        int rem= max(n,m)-eq;
        if(rem > 0){
            if(rem %2 ){
                ans+=(2*rem -1);
            }
            else{
                ans+=(2*rem);
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}