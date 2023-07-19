#include<bits/stdc++.h>
using namespace std;
int checksort(int a[],int n){
    if (n==0)   return 1;
    return (a[n-1]>a[n-2] && checksort(a,n-1));
}
int main(){
    system("cls");
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++)    cin>>a[i];
    cout<<"\n"<<checksort(a,n);
    return 0;
}