#include<bits/stdc++.h>
using namespace std;
/*
void selsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

void bubsort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
}
*/
void inssort(int a[],int n){
    for(int i=1;i<n;i++){
        int cur=a[i];
        int j=i-1;
        while(a[j]>cur && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
    for(int i=0;i<n;i++)    cout<<a[i]<<" ";
}
int main(){
    system("cls");
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the unsorted array:\n";
    for(int i=0;i<n;i++)    cin>>a[i];
    cout<<"the sorted array is: ";
    //selsort(a,n);
    //bubsort(a,n);
    inssort(a,n);
    return 0;
}