#include<bits/stdc++.h>
using namespace std;
void getprimesieve(int n){
    int a[n+1];
    for(int i=0;i<=n;i++)    a[i]=0;
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return;
}
void getprimefact(int n){
    int a[n+1];
    for(int i=0;i<=n;i++)   a[i]=i;
    for(int i=2;i<=n;i++){
        if(a[i]==i){
            for(int j=i*i;j<=n;j=j+i){
                if(a[j]==j)  
                    a[j]=i;
            }
        }
    }
    while(n!=1){
        cout<<a[n]<<" ";
        n=n/a[n];
    }
    return;
}
int main(){
    system("cls");
    int n;
    //cout<<"enter n for prime nos uptil n: ";
    cout<<"enter n to get prime factors of n: ";
    cin>>n;
    //getprimesieve(n);
    getprimefact(n);
    return 0;
}