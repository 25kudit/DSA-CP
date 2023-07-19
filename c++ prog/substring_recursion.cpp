#include<bits/stdc++.h>
using namespace std;
void substr(string s,string a=" ",int idx=0){
    if(s.length()==idx){
        cout<<a<<" ";
        return;
    }
   
     substr(s,a,idx+1);
     substr(s,a+s[idx],idx+1);
}
int main(){
    system("cls");
    string s;
    cout<<"enter any string: ";
    getline(cin,s);
    substr(s);
    return 0;
}