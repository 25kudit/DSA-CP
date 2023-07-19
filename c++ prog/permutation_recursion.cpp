#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+s[i]);
    }
}
int main(){
    system("cls");
    string s;
    cout<<"enter the string to obtain all permutations: ";
    getline(cin,s);
    permutation(s,"");
    return 0;
    
}