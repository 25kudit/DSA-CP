#include<bits/stdc++.h>
using namespace std;
int totalval(int n,int val[],int wt[],int w){
    if(n==0||w==0)  return 0;
    if(wt[n-1]>w){
        return totalval(n-1,val,wt,w);
    }
    //cout<< "&"<<max((totalval(n-1,val,wt,w-wt[n-1])+val[n-1]),totalval(n-1,val,wt,w));

    return max((totalval(n-1,val,wt,w-wt[n-1])+val[n-1]),totalval(n-1,val,wt,w));

}
int main(){
    system("cls");
    int n,w;
    cout<<"enter the number of items: ";
    cin>>n;
    cout<<"enter the weight: ";
    cin>>w;
    int val[n],wt[n];
    cout<<"enter the value of items: ";
    for(int i=0;i<n;i++)    cin>>val[i];
    cout<<"enter the weight of items: ";
    for(int i=0;i<n;i++)    cin>>wt[i];
    cout<<"maximum value is: "<<totalval(n,val,wt,w);
    return 0; 
}