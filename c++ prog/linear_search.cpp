#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int a[n],k,f=-1,i;
    cout<<"enter the array: ";
    for(int j=0;j<n;j++) {
        cin>>a[j];
    }
    cout<<"enter the key: ";
    cin>>k;
    for(i=0;i<n;i++){
        if(a[i]==k){
            f=1;break;
        }
    }
    if(f==-1){
        cout<<"key not found ";
    }
    else{
        cout<<"key found at position: "<<i+1;
    }
    return 0;
}