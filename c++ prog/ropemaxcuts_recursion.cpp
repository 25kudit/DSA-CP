#include<bits/stdc++.h>
using namespace std;
int maxcut(int n,int a,int b,int c){
    if(n<0) return -1;
    if(n==0) return 0;
    int t= max(maxcut(n-a,a,b,c),max(maxcut(n-b,a,b,c),maxcut(n-c,a,b,c)));
    if (t==-1)  return -1;
    return t+1;
}
int main(){
    system("cls");
    int n,a,b,c;
    cout<<"enter length:";
    cin>>n;
    cout<<"enter a,b,c: ";
    cin>>a>>b>>c;
    cout<<"maximum cuts possible are: "<<maxcut(n,a,b,c);
    return 0;
}