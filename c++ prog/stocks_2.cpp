#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    int a[]={5,2,6,1,4,7,3,6};
    int n=sizeof(a)/sizeof(int),lmin=0,lmax=0,maxprofit=0;
    for(int i=0;i<n;i++){
        if(((i==0)&&(a[i]<a[i+1]))||((a[i]<a[i+1])&&(a[i]<a[i-1]))){
            lmin=a[i];
            //cout<<lmin<<"$\n";
        }
        else{
            lmin=0;
        }
        if(((i==(n-1))&&(a[i]>a[i-1]))||((a[i]>a[i+1])&&(a[i]>a[i-1]))){
            lmax=a[i];
            //cout<<lmax<<"@\n";
        }
        else{
            lmax=0;
        }
        maxprofit+=lmax-lmin;
    }
    cout<<maxprofit;
    return 0;
}