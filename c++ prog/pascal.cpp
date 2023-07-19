#include<iostream>
#include<math.h>
using namespace std;
long f(int n){
    long fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    system("cls");
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(f(i)/(f(j)*f(i-j)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}