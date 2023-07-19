#include<bits/stdc++.h>
using namespace std;
void printreverse(string s){
    if(s.length()==0)     return;
    printreverse(s.substr(1));
    cout<<s[0];
}
void getreverse(string s,int st,int en){
    if(st>=en)  {
        cout<<s<<endl;
        printreverse(s);
        return ;
    }
    char ch;
    ch=s[st];
    s[st]=s[en];
    s[en]=ch;    
    getreverse(s,++st,--en);
    
}

int main(){
    system ("cls");
    string s,sn;
    cout<<"enter the word or sentence: ";
    getline(cin,s,'\n');
    //printreverse(s);
    cout<<"inside main: ";
    getreverse(s,0,(s.length()-1));
    
    return 0;
}