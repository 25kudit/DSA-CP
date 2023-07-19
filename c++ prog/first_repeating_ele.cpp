#include<bits/stdc++.h>
using namespace std;
/*
void firstrepeatingelement(int a[],int n){
    //time complexity is O(n2) 
    //can handle negative elements also
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<"first repeating element is at the position: "<<i+1;
                cout<<"\n the first repeating element is: "<<a[i];
                return ;
            }
        }
    }
    cout<<"there is no repeating element in array";     
    return ;
}
*/
void firstrepeatingelement(int a[],int n){
    //time complexity is O(n)
    //can not handle negative integers
    int N=999;
    int idx[N];
    for(int i=0;i<N;i++)    idx[i]=-1;
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX)     cout<<"there is no repeating element in the array";
    else{
        cout<<"first repeating element is at the position: "<<minidx+1;
        cout<<"\nthe first repeating element is: "<<a[minidx];
    }
}
int main(){
    system("cls");
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter the array:\n";
    for(int i=0;i<n;i++)    cin>>a[i];
    firstrepeatingelement(a,n);
    return 0;
}