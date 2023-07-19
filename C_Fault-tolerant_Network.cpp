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
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        ll c1=abs(a[0]-b[0]) + abs(a[n-1] - b[n-1]);
        
        ll c2= abs(a[0]-b[n-1]) + abs(a[n-1]-b[0]);
        
        ll c3 = abs(a[0]-b[0]),tmp=INT_MAX;
        for(ll i=0;i<n;i++){
            tmp=min(tmp,abs(a[n-1]-b[i]));
        }
        c3+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp = min(tmp,abs(b[n-1]-a[i]));
        }
        c3+=tmp;
        tmp=INT_MAX;

        ll c4 = abs(a[n-1]-b[n-1]);
        for(int i=0;i<n;i++){
            tmp=min(tmp,abs(a[0]-b[i]));
        }
        c4+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp = min(tmp,abs(b[0]-a[i]));
        }
        c4+=tmp;
        tmp=INT_MAX;

        ll c5= abs(a[n-1]-b[0]);
        for(int i=0;i<n;i++){
            tmp=min(tmp,abs(a[0]-b[i]));
        }
        c5+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp = min(tmp,abs(b[n-1]-a[i]));
        }
        c5+=tmp;
        tmp=INT_MAX;

        ll c6= abs(a[0]-b[n-1]);
        for(int i=0;i<n;i++){
            tmp=min(tmp,abs(a[n-1]-b[i]));
        }
        c6+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp = min(tmp,abs(b[0]-a[i]));
        }
        c6+=tmp;
        tmp=INT_MAX;

        ll c7=0;
        for(int i=0;i<n;i++){
            tmp=min(tmp,abs(a[n-1]-b[i]));
        }
        c7+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp = min(tmp,abs(b[n-1]-a[i]));
        }
        c7+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp=min(tmp,abs(a[0]-b[i]));
        }
        c7+=tmp;
        tmp=INT_MAX;
        for(int i=0;i<n;i++){
            tmp = min(tmp,abs(b[0]-a[i]));
        }
        c7+=tmp;
        tmp=INT_MAX;
        cout<<min(c1,min(c2,min(c3,min(c4,min(c5,min(c6,c7))))))<<"\n";
    }

    return 0;
}