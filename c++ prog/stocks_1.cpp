#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    int a[]={3,5,1,7,4,9,3};
    int min=a[0],maxprofit=0,n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        if((a[i]-min)>maxprofit){
            maxprofit=a[i]-min;
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<maxprofit;
    return 0;
}