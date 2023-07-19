#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int xo=0,ans=0;
    for(int i=0;i<=n-k;i++) xo^=(s[i]-'0');
    if(xo==1) ans++;
    int remind=0,addind=n-k+1;
    for(int i=0;i<k;i++){
        xo^=(s[remind]-'0');
        xo^=(s[addind]-'0');
        if(xo==1) ans++;
        remind++;addind++;
    }
    cout<<ans<<"\n";
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;


}
