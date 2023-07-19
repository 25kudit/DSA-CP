#include<bits/stdc++.h>
using namespace std;
int binsearch(int n,int a[],int k){
    int st,en,mid;
    st=0;
    en=n-1;
    while(st<=en){
        mid=(st+en)/2;
        if(a[mid]==k) return mid;
        else if (a[mid]>k) en=mid-1;
        else st=mid+1;
    }
    return -1;
}
int main(){
    system("cls");
    int n;
    //cout<<"enter the size of array: ";
    //cin>>n;
    int a[5]={1,2,4,8,9};
    //cout<<"enter the array in the sorted order:\n";
    //for (int i=0;i<n;i++)   cin>>a[i];
    int k=8;
    //cout<<"enter the key: ";
   // cin>>k;
    cout<<binsearch(5,a,k);
    return 0;
}