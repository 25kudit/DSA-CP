#include<bits/stdc++.h>
using namespace std;
int ispowof2(int n){
    return (n && ((n & (n-1))==0));
}
int nosof1s(int n){
    int c=0;
    while(n){
        n=n & n-1;
        c++;
    }
    return c;
}
int main(){
    system("cls");
    int n;
    cin>>n;
    cout<<endl<<ispowof2(n);
    cout<<endl<<nosof1s(n);
    return 0;

}