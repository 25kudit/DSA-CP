#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0||n==1)  return n;
    return fib(n-1)+fib(n-2);   
}
int fibSum(int n){
    //int sum=0;
    if(n==0||n==1)  return n;
    return fibSum(n-1)+fibSum(n-2)+1;
}
int main(){
    system("cls");
    int n;
    cout<<"enter n to print Nth fibonacci number: ";
    cin>>n;
    cout<<fib(n-1);
    cout<<"\nfibonacci sum upto n: "<<fibSum(n-1);
    return 0;
}