#include<bits/stdc++.h>
using namespace std;
void toh(int n,char src,char dest,char help){
    if(n==0)    return;
    toh(n-1,src,help,dest);
    cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,help,dest,src);

}
int main(){
    system("cls");
    cout<<"enter the number of blocks in source(A): ";
    int n;
    cin>>n;
    toh(n,'A','C','B');
    return 0;
}