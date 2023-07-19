//given a "2 x n" board and tiles of size "2 x 1"
//count the number of ways to tile the given board using these tiles

#include<bits/stdc++.h>
using namespace std;
int noOfways(int n){
    if(n==0)    return 0;
    if(n==1)    return 1;
    return noOfways(n-1)+noOfways(n-2);
}
int main(){
    system("cls");
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"total number of ways: "<<noOfways(n);
    return 0;
}