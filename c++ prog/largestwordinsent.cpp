#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    char a[100];
    cout<<"enter the sentence: ";
    gets(a); 
    int cl=0,mxl=0,i=0,st=0,mxst=0;
    while(i<=strlen(a)){
        if(a[i]==' '||a[i]=='\0'){
            if(cl>mxl){
                mxst=st;
                mxl=cl;
            }
            st=i+1;
            cl=0;
        }
        else{
            cl++;
        }
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<"maximum length: "<<mxl;
    cout<<"\nlongest word is: ";
    for(int i=0;i<mxl;i++)  cout<<a[mxst+i];
    cout<<endl;
    return 0;


}