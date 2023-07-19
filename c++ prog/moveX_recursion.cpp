#include<bits/stdc++.h>
using namespace std;
string moveX(string s){
    if(s.size()==0) return "";
    string ans=moveX(s.substr(1));
    if(s[0]=='x')  return (ans+s[0]);
    return (s[0]+ans);
}
int main(){
    system("cls");
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    cout<<"new string: "<<moveX(s);
    return 0;
}