#include<bits/stdc++.h>
using namespace std;
/*
long bintodeci(int n){
    long ans=0;
    for(int i=0;n>0;i++){
        int ld=n%10;
        ans+=ld*pow(2,i);
        n/=10;
    }
    return ans;
}
long octtodeci(int n){
    long ans=0;
    for(int i=0;n>0;i++){
        int ld=n%10;
        ans+=ld*pow(2,i);
        n/=10;
    }
    return ans;
}

long hextodeci(string n){
    long ans=0;
    int s=n.size();
    int j=0;
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0'&& n[i]<='9'){
            ans+=(n[i]-'0')*pow(16,j);
        }
        else if(n[i]>='A'&& n[i]<='F'){
            ans+=(n[i]-'A'+ 10)*pow(16,j);
        }
        j++;
    }
    return ans;
}

long int pow2(int a,int b){
    long int ans=1;
    for(;b>0;b--){
        ans*=a;
    }
    return ans;
}
int decitobin(int n){
    int ans=0,i=0,r=0;
    while(n!=0){
        r=n%2;
        ans=ans+r*pow2(10,i);
        n/=2;
        i++;
    }
    return ans;
}

long int decitooct(int n){
    int ans=0,i=0,r=0;
    while(n!=0){
        r=n%8;
        ans=ans+r*pow2(10,i);
        n/=8;
        i++;
    }
    return ans;
}
*/
void decitohex(int n){
    string ans=" ";
    int i=0,r=0;
    while(n!=0){
        r=n%16;
        if(r>=0 && r<=9){
            ans[i]=(r+'0'); 
        }
        else if (r>=10 && r<=15){
            ans[i]=(r-10+'A');
        }
        n/=16;
        i++;
    }
    for(int j=i-1;j>=0;j--) cout<<ans[j];

}
int main(){
    system("cls");
    int n;
    //string n;
    cout<<"enter the number to be converted: ";
    cin>>n;
    //cout<<"decimal equivalent: "<<bintodeci(n);
    //cout<<"decimal equivalent: "<<octtodeci(n);
    //cout<<"decimal equivalent: "<<hextodeci(n);
    //cout<<"binary equivalent: "<<decitobin(n);
    //cout<<"octal equivalent: "<<decitooct(n);
    cout<<"hexadecimal equivalent: "; decitohex(n);
    return 0;
}