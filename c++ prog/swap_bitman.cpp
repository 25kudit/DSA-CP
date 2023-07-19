#include<bits/stdc++.h>
using namespace std;
void swap (int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
    return;
}
int main(){
    system("cls");
    int a,b;
    cout<<"enter two numbers: ";
    cin >> a>> b;
    swap (a,b);
    return 0;
}