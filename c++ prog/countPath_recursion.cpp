#include<bits/stdc++.h>
using namespace std;
int countpath(int st,int en){
    if(st>en)   return 0;
    if(st==en)  return 1;
    int count =0;
    for(int i=1;i<=6;i++){
        count+=countpath(st+i,en);
    }
    return count;
}
int main(){
    system("cls");
    int a,b;
    cout<<"enter the starting and ending point: ";
    cin>>a>>b;
    cout<<"number of paths: "<<countpath(a,b);
    return 0;
}