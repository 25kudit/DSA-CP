#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int i){
    return ((n & (1<<i))!=0);
}
int setbit(int n,int i){
    return(n|(1<<i));
}
int clearbit(int n,int i){
    return(n & (~(1<<i)));
}
int togglebit(int n,int i){
    return (n xor (1<<i));
}
int changebit(int n,int i,int val){
    n=(n & (~(1<<i)));
    return (n | (val<<i));
}
int main(){
    system("cls");
    int n,i;
    cin>>n;
    cin>>i;
    cout<<getbit(n,i);
    cout<<endl<<setbit(n,i);
    cout<<endl<<clearbit(n,i);
    cout<<endl<<togglebit(n,i);
    int v;
    cin>>v;
    cout<<endl<<changebit(n,i,v);
    return 0;

}