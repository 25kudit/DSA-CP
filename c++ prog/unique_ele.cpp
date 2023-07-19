#include<bits/stdc++.h>
using namespace std;
int unique1(int a[],int n){
    //to find the only unique element in array where 
    //every element is repeated twice except one
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    return xorsum;
}
int getsetbit(int a){
    int c=0;
    while(a){
        if(a & 1)   break;
        c++;
        a=a>>1;        
    }
    return (c);   
}
void unique2(int a[],int n){
    //to find the two unique elements in array where 
    //every element is repeated twice except two
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    //cout<<xorsum<<endl;
    int pos=getsetbit(xorsum);
    //cout<<pos;
    int xorsum2=0;
    for(int i=0;i<n;i++){
        if((a[i] & (1<<pos))!=0){
            //cout<<a[i];
            xorsum2=xorsum2^a[i];
        }
    }
    cout<<"num1: "<<xorsum2;
    cout<<"\nnum2: "<<(xorsum2^xorsum);
    return;
}
int setbit(int a,int pos){
    return(a|(1<<pos));
}
void unique(int a[],int n){
    int count[64];
    for(int i=0;i<64;i++)   count[i]=0;
    for(int i=0;i<n;i++){
        int pos=0;
        while(a[i]){
            if((a[i] & 1)){
                count[pos]++;                
            }
            pos++;
            a[i]=a[i]>>1;
        }
    }
    int ans=0;
    for(int i=0;i<64;i++){
        if((count[i]%3)!=0){
            cout<<i;
            ans=setbit(ans,i);
        }
        
    }
    cout<<"unique number: "<<ans;
    return;
    
}
int main(){
    system("cls");
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter the array: ";
    for(int i=0;i<n;i++)    cin>>a[i];
    //cout<<"unique element is: "<<unique1(a,n);
    // unique2(a,n);
    unique(a,n);
    return 0;

}