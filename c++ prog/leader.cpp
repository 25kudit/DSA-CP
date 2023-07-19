#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    int a[]={25,3,20,15,8,3};
    int n;
    n=sizeof(a)/sizeof(int);
    int max=INT_MIN;
    for(int i=(n-1);i>=0;i--){
        if(max<a[i]){
            cout<<a[i]<<" ";
            max=a[i];
        }
    }
    return 0;
}