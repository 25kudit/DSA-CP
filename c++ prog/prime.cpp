#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int i){
    for(int a=2;a<=sqrt(i);a++){
        if((i%a)==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    system("cls");
    int a,b;
    cout<<"enter the lower limit: ";
    cin>>a;
    cout<<"enter the upper limit: ";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(isprime(i))
            cout<<endl<<i;
    }
    return 0;
}
