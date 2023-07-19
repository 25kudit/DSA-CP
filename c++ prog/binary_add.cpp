#include<bits/stdc++.h>
using namespace std;
int pow2(int a,int b){
    long int ans=1;
    for(;b>0;b--){
        ans*=a;
    }
    return ans;
}
int binadd(int a, int b){
    int i,ans=0,carry=0;
    for(i=0;(a>0 && b>0);i++){
        if(a%10==0 && b%10==0){
            if(carry==0){
                carry=0;
            }
            else if(carry==1){
                ans+=pow2(10,i);
                carry=0;
            }
        }
        else if((a%10==1 && b%10==0)||(a%10==0 && b%10==1)){
            if(carry==0){
                ans+=pow2(10,i);
                carry=0;
            }
            else if(carry==1){
                carry=1;
            }
        }
        else if(a%10==1 && b%10==1){
            if(carry==0){
                carry=1;
            }
            else if(carry==1){
                ans+=pow2(10,i);
                carry=1;
            }
        }
        a/=10;b/=10;
    }
    for(;a>0;i++){
        if(a%10==0){
            if(carry==0){
                carry=0;
            }
            else if(carry==1){
                ans+=pow2(10,i);
                carry=0;
            }
        }
        else if(a%10==1){
            if(carry==0){
                ans+=pow2(10,i);
                carry=0;
            }
            else if (carry==1){
                carry=1;
            }
        }
        a/=10;
    }
    for(;b>0;i++){
        if(b%10==0){
            if(carry==0){
                carry=0;
            }
            else if(carry==1){
                ans+=pow2(10,i);
                carry=0;
            }
        }
        else if(b%10==1){
            if(carry==0){
                ans+=pow2(10,i);
                carry=0;
            }
            else if (carry==1){
                carry=1;
            }
        }
        b/=10;
    }
    if(carry==1){
        ans+=pow2(10,i);
        carry=0;
    }
    return ans;

}
int main(){
    system("cls");
    int a,b;
    cout<<"enter two binary numbers: ";
    cin>>a>>b;
    cout<<"the sum of both the numbers is: "<<binadd(a,b);
    return 0;
}