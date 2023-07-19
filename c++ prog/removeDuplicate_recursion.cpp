#include<bits/stdc++.h>
using namespace std;
/*
void remdup(string s){
    if(s.size()==0) return;
    int i=0;
    while(s[i]==s[0])   i++;
    i--;
    cout<<s[i];
    remdup(s.substr(i+1));
}
*/
string remdup(string s){
    if(s.size()==0) return "";
    char ch=s[0];
    string ans=remdup(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    system("cls");
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    cout<<remdup(s)<<endl;
    return 0;
}