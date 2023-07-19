#include<bits/stdc++.h>
using namespace std;
long sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
int main(){
    system("cls");
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"sum of the first n natural nos is: "<<sum(n);
    return 0;
}