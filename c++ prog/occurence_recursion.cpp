#include<bits/stdc++.h>
using namespace std;
int firstocc(int a[],int n,int i,int k){
    if(i==n)    return -1;
    if(a[i]==k) return i;
    firstocc(a,n,i+1,k);
}
int lastocc(int a[],int n,int i,int k){
    if(i==n)    return -1;
    if (lastocc(a,n,i+1,k)!=-1)     return lastocc(a,n,i+1,k);
    if(a[i]==k) return i;
    return -1;
}
int main(){
    system("cls");
    int n;
    cout<<"enter the size of array: ";
    cin>>n;    
    int a[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)    cin>>a[i];
    int k;
    cout<<"enter the element to search: ";
    cin>>k;
    cout<<"index of first occurence: "<<firstocc(a,n,0,k);
    cout<<"\nindex of last occurence: "<<lastocc(a,n,0,k);
    return 0;
}