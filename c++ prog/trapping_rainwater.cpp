#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a[]={3,0,1,2,5};
    int n=sizeof(a)/sizeof(int);
    int leftMax[n],rightMax[n],lmax=0,rmax=0;
    
    for(int i=0;i<n;i++){
        leftMax[i]=max(a[i],lmax);
        if(a[i]>lmax)   lmax=a[i];
    }
    for(int j=n-1;j>=0;j--){
        rightMax[j]=max(a[j],rmax);
        if(a[j]>rmax)   rmax=a[j];
    }
    int s=0;
    for(int i=0;i<n;i++){
        s=s+((min(leftMax[i],rightMax[i]))-a[i]);
    }
    cout<<s;
    return 0;
}