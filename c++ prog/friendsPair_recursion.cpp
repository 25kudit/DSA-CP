//given n friends, find the number of ways in which they can be paired
//each friend can remain single or be paired
#include<bits/stdc++.h>
using namespace std;
int noOfpair(int n){
    if(n==0||n==1||n==2)    return n;
    return noOfpair(n-1)+noOfpair(n-2)*(n-1);
}
int main(){
    system("cls");
    int n;
    cout<<"enter the number of friends: ";
    cin>>n;
    cout<<"total no of pairs: "<<noOfpair(n);
    return 0;
}