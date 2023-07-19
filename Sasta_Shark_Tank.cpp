#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b; 
        if(a*10 == b*5)cout<<"ANY\n";
        else if(a*10 > b*5) cout<<"FIRST\n";
        else cout<<"SECOND\n";
    }
    return 0;
}