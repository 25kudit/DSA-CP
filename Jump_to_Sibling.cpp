#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define watch(x) clog <<"["<<__LINE__<<"]"<< (#x) << " = " << (x) << endl

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
        int jmp = 0;
        if (a[0] % 2 == 0 && a[n - 1] % 2 == 0)
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] % 2 == 0)
                    jmp++;
            }
        }
        if (a[0] % 2 == 1 && a[n - 1] % 2 == 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] % 2 == 1)
                    jmp++;
            }
        }
        if (a[0] % 2 == 0 && a[n - 1] % 2 == 1)
        {
            int eoind=0,maxind=0,dist=0;
            for (int i = 0; i < n; )
            {
                if (a[i] % 2 == 0){
                    eoind=i;
                    i++;
                }
                while(a[i]%2==1){
                    i++;
                    if((i-eoind)>dist){
                        maxind=eoind;
                        dist=i-eoind;
                    }
                }
            }
            int i;
            for(i=1;i<=maxind;i++){
                if(a[i]%2==0) jmp++;
            }
            i+=dist;
            for(;i<n;i++){
                if(a[i]%2==1)jmp++;
            }

        }
        if (a[0] % 2 == 1 && a[n - 1] % 2 == 0)
        {
            int oeind=0,maxind=0,dist=0;
            for (int i = 0; i < n; )
            {
                if (a[i] % 2 == 1){
                    oeind=i;
                    i++;
                }
                while(a[i]%2==0){
                    
                    if((i-oeind)>dist){
                        maxind=oeind;
                        dist=i-oeind;
                    }
                    i++;
                }
            }
            watch(maxind);
            watch(dist);
            int i;
            for(i=1;i<=maxind;i++){
                if(a[i]%2==1) jmp++;
            }
            i+=dist;
            for(;i<n;i++){
                if(a[i]%2==0)jmp++;
            }

        }
        cout<<jmp<<"\n";
    }

    return 0;
}