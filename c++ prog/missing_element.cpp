#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter the array: \n";
    for(int i=0;i<n;i++)    cin>>a[i];
    int N=9999;
    bool ch[N];
    for(int i=0;i<N;i++)    ch[N]=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            ch[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=0;i<N;i++){
        if(ch[i]==0){
            ans=i;
            break;
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
    }
    if(ans>mx)  cout<<"no missing element found";
    else    cout<<"first missing element: "<<ans;
    return 0;
}