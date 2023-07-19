#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    char a[3][100]={"berlin","tokyo","sharanya"};
    for(int i=0;i<3;i++){
        int n=strlen(a[i]);
        if(n>5){
            char t[4]="\0";
            t[0]=a[i][0];
            t[1]=n-2+48;
            t[2]=a[i][n-1];
            strcpy(a[i],t);
        }
    }
    for(int i=0;i<3;i++){
        cout<<a[i]<<"\n";
    }

    return 0;
}