#include<bits/stdc++.h>
using namespace std;
bool isequal(int cs[],int cp[]){
    for(int i=0;i<26;i++){
        if(cs[i]!=cp[i]) return false;
    }
    return true;
}
int main(){
    string str, pat;
    cin>>str>>pat;
    int cs[26],cp[26],np=pat.length(),flag=0;
    for(int i=0;i<26;i++){
        cs[i]=0;cp[i]=0;
    }
    for(int i=0;i<np;i++){
        cp[pat[i]-'a']++;
        cs[str[i]-'a']++;
    }
    for(int i=np;i<str.length();i++){
        if(isequal(cs,cp)){
            cout<<"YES";    
            flag=1;
            break;
        }
        cs[str[i]-'a']++;
        cs[str[i-np]-'a']--;
    }
    if(flag==0) cout<<"NO";
    return 0;
}