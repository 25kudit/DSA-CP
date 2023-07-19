#include<bits/stdc++.h>
using namespace std;
void subsets(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        cout<<"{";
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<" "<<a[j]<<" ";
            }
        }cout<<"}"<<endl;
    }
}
int main(){
    system ("cls");
    int n;
    cout<<"enter the size of set: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of set : ";
    for(int i=0;i<n;i++)    cin>>a[i];
    cout<<"\nthe subsets are: ";
    subsets(a,n);
    return 0;
}