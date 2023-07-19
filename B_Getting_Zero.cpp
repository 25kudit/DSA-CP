#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 32768
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        if(t==0){
            cout<<0<<" ";
            continue;
        }
        int ans=15;
        for(int i=0;i<16;i++){
            int temp=t+i;
            int cnt=0;
            while(temp%2==0){
                temp/=2;
                cnt++;
            }
            // track[i]=15+i-cnt;
            ans=min(ans,15+i-cnt);
        }
        cout<<ans<<" ";

    }

    return 0;
}