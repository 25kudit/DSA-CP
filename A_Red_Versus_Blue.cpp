#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int part= r/(b+1);
        int extra = r%(b+1);
        while(r>0){
            int printr=part + (extra>0);
            extra--;
            for(int i=0;i<printr;i++) cout<<'R';
            if(b>0){
                cout<<"B";
                b--;
            }
            r-=printr;
        }
        cout <<"\n";
    }

    return 0;
}