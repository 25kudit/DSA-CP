#include<bits/stdc++.h>
using namespace std;

void multiply(int x,int y,int n,int a[][10],int b[][10]){
    int ans[x][n];
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++)
            ans[i][j]=0;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<y;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"the multiplied matrix is: \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return;
}

int main(){
    system("cls");
    int x,y,m,n;
    cout<<"enter the rows and columns of first matrix:(less than 10) ";
    cin>>x>>y;
    cout<<"enter the rows and columns of second matrix:(less than 10)";
    cin>>m>>n;
    if (y!=m){
        cout<<"the two matrices cannot be multiplied !";
        return 0;
    }
    int a[10][10],b[10][10];
    cout<<"enter the first matrix:\n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix: \n";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    multiply(x,y,n,a,b);


    return 0;

}