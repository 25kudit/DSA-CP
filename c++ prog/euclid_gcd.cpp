#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    cout<<"gcd is: "<< a;
}
int main(){
    system("cls");
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    gcd(max(a,b),min(a,b));
    return 0;
}